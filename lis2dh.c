#include "lis2dh.h"
//#include "delay.h"
//初始化 IIC 接口
void lis2dh_Init(void)
{
IIC_Init();
}
//在 lis2dh 指定地址读出一个数据
//ReadAddr:开始读数的地址
//返回值 :读到的数据
u8 lis2dh_ReadOneByte(u16 ReadAddr)
{
u8 temp=0;
IIC_Start();
if(EE_TYPE>2047)
{
IIC_Send_Byte(0X30); //发送写命令
IIC_Wait_Ack();
IIC_Send_Byte(ReadAddr>>8);//发送高地址
}else IIC_Send_Byte(0X30+((ReadAddr/256)<<1)); //发送器件地址 0X30,写数据
IIC_Wait_Ack();
IIC_Send_Byte(ReadAddr%256); //发送低地址
IIC_Wait_Ack();
IIC_Start();
IIC_Send_Byte(0X31); //进入接收模式
IIC_Wait_Ack();
temp=IIC_Read_Byte(0);
IIC_Stop();//产生一个停止条件
return temp;
}
//在 lis2dh 指定地址写入一个数据
//WriteAddr :写入数据的目的地址
//DataToWrite:要写入的数据
void lis2dh_WriteOneByte(u16 WriteAddr,u8 DataToWrite)
{
      IIC_Start();
      if(EE_TYPE>2047)
      {
          IIC_Send_Byte(0X30); //发送写命令
          IIC_Wait_Ack();
          IIC_Send_Byte(WriteAddr>>8);//发送高地址
       }
      else IIC_Send_Byte(0X30+((WriteAddr/256)<<1)); //发送器件地址 0X30,写数据
       IIC_Wait_Ack();
       IIC_Send_Byte(WriteAddr%256); //发送低地址
       IIC_Wait_Ack();
       IIC_Send_Byte(DataToWrite); //发送字节
       IIC_Wait_Ack();
       IIC_Stop();//产生一个停止条件
     // HAL_Delay(10);
}
//在 lis2dh 里面的指定地址开始写入长度为 Len 的数据
//该函数用于写入 16bit 或者 32bit 的数据.
//WriteAddr :开始写入的地址
//DataToWrite:数据数组首地址
//Len :要写入数据的长度 2,4
void lis2dh_WriteLenByte(u16 WriteAddr,u32 DataToWrite,u8 Len)
{
u8 t;
for(t=0;t<Len;t++)
{
lis2dh_WriteOneByte(WriteAddr+t,(DataToWrite>>(8*t))&0xff);
}
}
//在 lis2dh 里面的指定地址开始读出长度为 Len 的数据
//该函数用于读出 16bit 或者 32bit 的数据.
//ReadAddr :开始读出的地址
//返回值 :数据
//Len :要读出数据的长度 2,4
u32 lis2dh_ReadLenByte(u16 ReadAddr,u8 Len)
{
u8 t;
u32 temp=0;
for(t=0;t<Len;t++)
{
temp<<=8;
temp+=lis2dh_ReadOneByte(ReadAddr+Len-t-1);
}
return temp;
}
//检查 lis2dh 是否正常
//这里用了 lis2dh 的最后一个地址(255)来存储标志字.
//如果用其他 24C 系列,这个地址要修改
//返回 1:检测失败
//返回 0:检测成功
u8 lis2dh_Check(void)
{
u8 temp;
temp=lis2dh_ReadOneByte(255);//避免每次开机都写lis2dh
if(temp==0X55)return 0;
else//排除第一次初始化的情况
{
lis2dh_WriteOneByte(255,0X55);
temp=lis2dh_ReadOneByte(255);
if(temp==0X55)return 0;
}
return 1;
}
//在 AT24CXX 里面的指定地址开始读出指定个数的数据
//ReadAddr :开始读出的地址 对 24c02 为 0~255
//pBuffer :数据数组首地址
//NumToRead:要读出数据的个数
void lis2dh_Read(u16 ReadAddr,u8 *pBuffer,u16 NumToRead)
{
while(NumToRead)
{
*pBuffer++=lis2dh_ReadOneByte(ReadAddr++);
NumToRead--;
}
}
//在 AT24CXX 里面的指定地址开始写入指定个数的数据
//WriteAddr :开始写入的地址 对 24c02 为 0~255
//pBuffer :数据数组首地址
//NumToWrite:要写入数据的个数
void lis2dh_Write(u16 WriteAddr,u8 *pBuffer,u16 NumToWrite)
{
while(NumToWrite--)
{
lis2dh_WriteOneByte(WriteAddr,*pBuffer);
WriteAddr++;
pBuffer++;
}
}