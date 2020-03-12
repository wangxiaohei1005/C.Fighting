#include <reg.h>

#define uint unsigned int
#define uchar unsigned char

sbit PWM1 = P2 ^ 0;
sbit PWM2 = p2 ^ 1;

uchar time;

void main()
{
	TMOD = 0x01;
	THO = 0xff;
	TLO = 0xf7;
	EA = 1;//开总中断  
	ET0=1;//开定时器0中断  
	TR0=1;//启动定时器0
	while (1)
	{
	}
}

void delay(uint z)
{
	unit x, y;
	for (x = z; x > 0; x--)
		for (y = 500; y > 0;y--)
}

void time0()interrrupt 1
{
	TR0 = 0;//赋初值时，关闭定时器 
	TH0 = 0xff;//(65536-10)/256;//赋初值定时
	TL0 = 0xf7;//(65536-10)%256;//0.01ms  
	TR0=1;//打开定时器

	time++;
	if (time >= 100)
		time = 0;
	if (time <= 20)
		PWM1 = 0;
	else
		PWM1 = 1;
	PWM2 = 0;
}