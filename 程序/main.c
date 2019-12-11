#include <REGX52.H>
#include <intrins.h>

#define uchar unsigned char 
#define uint unsigned int
#define ulong unsigned long

sbit ADC_CS=P2^4;
sbit ADC_RD=P2^3;
sbit ADC_WR=P2^2;
sbit led=P3^5;
sbit k1=P3^6;
sbit k2=P3^7;
sbit LCD_RS=P2^7;
sbit LCD_RW=P2^6;
sbit LCD_EN=P2^5;

uint weight,weight_value,ADC_Value_1;
ulong ADC_Value;
bit bz,w;

void yanshi(uint i){while(i--);}

uchar ADC_0804()
{
	uchar dat;	
	ADC_WR=1;
	_nop_();
	ADC_WR=0;
	_nop_();
	ADC_WR=1;
	yanshi(50);
	ADC_RD=1;
	_nop_();
	ADC_RD=0;
	_nop_();
	dat=P1;
	ADC_RD=1;
	return dat;
}	 

void Write_1602(uchar dat,bit com_dat)	   	//LCD1602 写程序
{
	LCD_RS=com_dat;		  //控制LCD1602是写命令还是写数据
	LCD_RW=0; 		//写	 1 是读
	P0=dat;		//向LCD1602的数据端口写数据

	LCD_EN=1;		   	//开使能
	yanshi(50);	 //延时
	LCD_EN=0;			 //关使能
	yanshi(50);	   //延时
}

void Write_1602_char(uchar *p)		//这个只能用在写数据   字符串方式写
{
	while(*p != '\0')
	{
		Write_1602(*p,1);
		p++;	
	}	
}

void LCD1602_INIT()		 //1602初始化
{
	Write_1602(0x38,0);
	Write_1602(0x06,0);
	Write_1602(0x0c,0);
}

void key()
{
	if(k1==1 && k2==1){bz=1;}

	if(k1==0 && bz==1){bz=0;w=1;weight_value = ADC_0804();led=0;}

	if(k2==0 && bz==1){bz=0;w=0;weight_value=ADC_Value_1;led=1;}
}

void main()
{
	uint dat,i;
	ADC_CS=0;

	LCD1602_INIT();
	Write_1602(0x80,0);
	Write_1602_char("Weight:");
	Write_1602(0x80 + 10,0);
	Write_1602('g',1);		  	

	ADC_Value_1 = ADC_0804();
	weight_value=ADC_Value_1;

	while(1)
	{
		key();
		i++;
		if(i>=300)
		{	
			i=0;
			ADC_Value = ADC_0804();
			if(ADC_Value >= weight_value){ADC_Value = (ADC_Value-weight_value)*200/255;}
			else {ADC_Value = 0;}
			
			dat = ADC_Value;
			dat = dat*92/10;
	

		}

		Write_1602(0x80 + 7,0);
		Write_1602(dat/100%10 + 0x30,1);
		Write_1602(dat/10%10 + 0x30,1);
		Write_1602(dat%10 + 0x30,1);
	
		weight = ADC_Value - weight_value;
	}
}