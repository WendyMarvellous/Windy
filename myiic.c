#include "myiic.h"

//STM32 ���ģ�� IIC
//IIC ��������
//��ʼ�� IIC

void IIC_Init(void)
{
RCC->APB2ENR|=1<<3;//��ʹ������ IO PORTB ʱ��
GPIOB->CRL&=0XF00FFFFF;//PB5/6 �������
GPIOB->CRL|=0X03300000;
GPIOB->ODR|=3<<5; //PB5/6 �����
}
//���� IIC ��ʼ�ź�
void IIC_Start(void)
{
     SDA_OUT(); //sda �����
     IIC_SDA=1;
     IIC_SCL=1;
      delay(4);
     IIC_SDA=0;//START:when CLK is high,DATA change form high to low
      delay(4);
     IIC_SCL=0;//ǯס I2C ���ߣ�׼�����ͻ��������
     
}
//���� IIC ֹͣ�ź�
void IIC_Stop(void)
{
SDA_OUT();//sda �����
IIC_SCL=0;
IIC_SDA=0;//STOP:when CLK is high DATA change form low to high
delay(4);
IIC_SCL=1;
delay(4);
IIC_SDA=1;//���� I2C ���߽����ź�
delay(4);//////���߿�����Ҫ����һ��ʱ��
}
//�ȴ�Ӧ���źŵ���
//����ֵ�� 1������Ӧ��ʧ��
// 0������Ӧ��ɹ�
u8 IIC_Wait_Ack(void)
{
u8 ucErrTime=0;
SDA_IN(); //SDA ����Ϊ����
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
IIC_SCL=0;//ʱ����� 0
return 0;
}
//���� ACK Ӧ��
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
//������ ACK Ӧ��
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
//IIC ����һ���ֽ�
//���شӻ�����Ӧ��
//1����Ӧ��
//0����Ӧ��
void IIC_Send_Byte(u8 txd)
{
  
  u8 t;
  SDA_OUT();
  IIC_SCL=0;//����ʱ�ӿ�ʼ���ݴ���
  for(t=0;t<8;t++)
  {
     ti=0;
     IIC_SDA=(txd&0x80)>>7;
     txd<<=1;
     delay(2); //�� TEA5767 ��������ʱ���Ǳ����
    
     IIC_SCL=1;
     delay(2);
 
     IIC_SCL=0;
     delay(2);
  

   }

}
//�� 1 ���ֽڣ� ack=1 ʱ������ ACK�� ack=0������ nACK
u8 IIC_Read_Byte(unsigned char ack)
{
unsigned char i,receive=0;
SDA_IN();//SDA ����Ϊ����

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
IIC_NAck();//���� nACK
else
IIC_Ack(); //���� ACK
return receive;
}