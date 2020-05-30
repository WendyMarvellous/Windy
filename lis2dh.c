#include "lis2dh.h"
//#include "delay.h"
//��ʼ�� IIC �ӿ�
void lis2dh_Init(void)
{
IIC_Init();
}
//�� lis2dh ָ����ַ����һ������
//ReadAddr:��ʼ�����ĵ�ַ
//����ֵ :����������
u8 lis2dh_ReadOneByte(u16 ReadAddr)
{
u8 temp=0;
IIC_Start();
if(EE_TYPE>2047)
{
IIC_Send_Byte(0X30); //����д����
IIC_Wait_Ack();
IIC_Send_Byte(ReadAddr>>8);//���͸ߵ�ַ
}else IIC_Send_Byte(0X30+((ReadAddr/256)<<1)); //����������ַ 0X30,д����
IIC_Wait_Ack();
IIC_Send_Byte(ReadAddr%256); //���͵͵�ַ
IIC_Wait_Ack();
IIC_Start();
IIC_Send_Byte(0X31); //�������ģʽ
IIC_Wait_Ack();
temp=IIC_Read_Byte(0);
IIC_Stop();//����һ��ֹͣ����
return temp;
}
//�� lis2dh ָ����ַд��һ������
//WriteAddr :д�����ݵ�Ŀ�ĵ�ַ
//DataToWrite:Ҫд�������
void lis2dh_WriteOneByte(u16 WriteAddr,u8 DataToWrite)
{
      IIC_Start();
      if(EE_TYPE>2047)
      {
          IIC_Send_Byte(0X30); //����д����
          IIC_Wait_Ack();
          IIC_Send_Byte(WriteAddr>>8);//���͸ߵ�ַ
       }
      else IIC_Send_Byte(0X30+((WriteAddr/256)<<1)); //����������ַ 0X30,д����
       IIC_Wait_Ack();
       IIC_Send_Byte(WriteAddr%256); //���͵͵�ַ
       IIC_Wait_Ack();
       IIC_Send_Byte(DataToWrite); //�����ֽ�
       IIC_Wait_Ack();
       IIC_Stop();//����һ��ֹͣ����
     // HAL_Delay(10);
}
//�� lis2dh �����ָ����ַ��ʼд�볤��Ϊ Len ������
//�ú�������д�� 16bit ���� 32bit ������.
//WriteAddr :��ʼд��ĵ�ַ
//DataToWrite:���������׵�ַ
//Len :Ҫд�����ݵĳ��� 2,4
void lis2dh_WriteLenByte(u16 WriteAddr,u32 DataToWrite,u8 Len)
{
u8 t;
for(t=0;t<Len;t++)
{
lis2dh_WriteOneByte(WriteAddr+t,(DataToWrite>>(8*t))&0xff);
}
}
//�� lis2dh �����ָ����ַ��ʼ��������Ϊ Len ������
//�ú������ڶ��� 16bit ���� 32bit ������.
//ReadAddr :��ʼ�����ĵ�ַ
//����ֵ :����
//Len :Ҫ�������ݵĳ��� 2,4
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
//��� lis2dh �Ƿ�����
//�������� lis2dh �����һ����ַ(255)���洢��־��.
//��������� 24C ϵ��,�����ַҪ�޸�
//���� 1:���ʧ��
//���� 0:���ɹ�
u8 lis2dh_Check(void)
{
u8 temp;
temp=lis2dh_ReadOneByte(255);//����ÿ�ο�����дlis2dh
if(temp==0X55)return 0;
else//�ų���һ�γ�ʼ�������
{
lis2dh_WriteOneByte(255,0X55);
temp=lis2dh_ReadOneByte(255);
if(temp==0X55)return 0;
}
return 1;
}
//�� AT24CXX �����ָ����ַ��ʼ����ָ������������
//ReadAddr :��ʼ�����ĵ�ַ �� 24c02 Ϊ 0~255
//pBuffer :���������׵�ַ
//NumToRead:Ҫ�������ݵĸ���
void lis2dh_Read(u16 ReadAddr,u8 *pBuffer,u16 NumToRead)
{
while(NumToRead)
{
*pBuffer++=lis2dh_ReadOneByte(ReadAddr++);
NumToRead--;
}
}
//�� AT24CXX �����ָ����ַ��ʼд��ָ������������
//WriteAddr :��ʼд��ĵ�ַ �� 24c02 Ϊ 0~255
//pBuffer :���������׵�ַ
//NumToWrite:Ҫд�����ݵĸ���
void lis2dh_Write(u16 WriteAddr,u8 *pBuffer,u16 NumToWrite)
{
while(NumToWrite--)
{
lis2dh_WriteOneByte(WriteAddr,*pBuffer);
WriteAddr++;
pBuffer++;
}
}