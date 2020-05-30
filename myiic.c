#include "myiic.h"

//STM32 软件模拟 IIC
//IIC 驱动函数
//初始化 IIC

void IIC_Init(void)
{
RCC->APB2ENR|=1<<3;//先使能外设 IO PORTB 时钟
GPIOB->CRL&=0XF00FFFFF;//PB5/6 推挽输出
GPIOB->CRL|=0X03300000;
GPIOB->ODR|=3<<5; //PB5/6 输出高
}
//产生 IIC 起始信号
void IIC_Start(void)
{
     SDA_OUT(); //sda 线输出
     IIC_SDA=1;
     IIC_SCL=1;
      delay(4);
     IIC_SDA=0;//START:when CLK is high,DATA change form high to low
      delay(4);
     IIC_SCL=0;//钳住 I2C 总线，准备发送或接收数据
     
}
//产生 IIC 停止信号
void IIC_Stop(void)
{
SDA_OUT();//sda 线输出
IIC_SCL=0;
IIC_SDA=0;//STOP:when CLK is high DATA change form low to high
delay(4);
IIC_SCL=1;
delay(4);
IIC_SDA=1;//发送 I2C 总线结束信号
delay(4);//////总线空闲需要保持一定时间
}
//等待应答信号到来
//返回值： 1，接收应答失败
// 0，接收应答成功
u8 IIC_Wait_Ack(void)
{
u8 ucErrTime=0;
SDA_IN(); //SDA 设置为输入
IIC_SDA=1;
delay(1);
IIC_SCL=1;
delay(1);
while(READ_SDA)
{
ucErrTime++;
if(ucErrTime>250)
{
IIC_Stop();
return 1;
}
}
IIC_SCL=0;//时钟输出 0
return 0;
}
//产生 ACK 应答
void IIC_Ack(void)
{
IIC_SCL=0;
SDA_OUT();
IIC_SDA=0;
delay(2);
IIC_SCL=1;
delay(2);
IIC_SCL=0;
}
//不产生 ACK 应答
void IIC_NAck(void)
{
IIC_SCL=0;
SDA_OUT();
IIC_SDA=1;
delay(2);
IIC_SCL=1;
delay(2);
IIC_SCL=0;
}
//IIC 发送一个字节
//返回从机有无应答
//1，有应答
//0，无应答
void IIC_Send_Byte(u8 txd)
{
  
  u8 t;
  SDA_OUT();
  IIC_SCL=0;//拉低时钟开始数据传输
  for(t=0;t<8;t++)
  {
     ti=0;
     IIC_SDA=(txd&0x80)>>7;
     txd<<=1;
     delay(2); //对 TEA5767 这三个延时都是必须的
    
     IIC_SCL=1;
     delay(2);
 
     IIC_SCL=0;
     delay(2);
  

   }

}
//读 1 个字节， ack=1 时，发送 ACK， ack=0，发送 nACK
u8 IIC_Read_Byte(unsigned char ack)
{
unsigned char i,receive=0;
SDA_IN();//SDA 设置为输入

for(i=0;i<8;i++ )
{
  ti=0;
IIC_SCL=0;

delay(2);
IIC_SCL=1;
receive<<=1;
if(READ_SDA)receive++;
delay(1);
}  
if (!ack)
IIC_NAck();//发送 nACK
else
IIC_Ack(); //发送 ACK
return receive;
}