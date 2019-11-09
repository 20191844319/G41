// ymd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int y,m,d,m1=31,m2,m3=31,m4=30,m5=31,m6=30,m7=31,m8=31,m9=30,m10=31,m11=30,m12=31,t;
	
	printf("请输入年月日:");
	scanf("%d,%d,%d",&y,&m,&d);
	if((y%4==0 && y%100!=0)||(y%400==0))
		m2=29;
	else
		m2=28;
	
	switch(m)
	{
	case 1:t=0;break;
	case 2:t=m1;break;
	case 3:t=m1+m2;break;
	case 4:t=m1+m2+m3;break;
	case 5:t=m1+m2+m3+m4;break;
	case 6:t=m1+m2+m3+m4+m5;break;
	case 7:t=m1+m2+m3+m4+m5+m6;break;
	case 8:t=m1+m2+m3+m4+m5+m6+m7;break;
	case 9:t=m1+m2+m3+m4+m5+m6+m7+m8;break;
	case 10:t=m1+m2+m3+m4+m5+m6+m7+m8+m9;break;
	case 11:t=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10;break;
	case 12:t=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+m11;break;
	default:printf("错误日期\n");

	}
	t+=d;
	printf("该日期是这一年的第%d天\n",t);
	
	return 0;
}

