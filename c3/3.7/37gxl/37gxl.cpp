// 37gxl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float r,h,C,S,S1,V1,V2,pi=3.14;
	printf("请输入半径和高:");
	scanf("%f%f",&r,&h);
	C=2*pi*r;
	printf("圆的周长为%.2f\n",C);
	S=pi*r*r;
	printf("圆的面积为%.2f\n",S);
	S1=4*pi*r*r;
	printf("圆球表面积为%.2f\n",S1);
	V1=(4/3)*pi*r*r;
	printf("圆球体积为%.2f\n",V1);
	V2=S*h;
	printf("圆柱的体积为%.2f\n",V2);

	return 0;
}

