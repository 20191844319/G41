// 3 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include<stdio.h>
int main(int argc, char* argv[])
{
float r,h,pi=3.141592,C,S1,S2,V1,V2;

	printf("请输入圆柱的半径和高\n");
	scanf("%f%f",&r,&h);
	C=4*pi*r;
	printf("圆周长=%2.2f\n",C);
	S1=pi*r*r;
	printf("圆面积=%2.2f\n",S2);
	V1=(4/3)*pi*r*r*r;
	printf("圆球体积=%2.2f\n",V1);
	V2=S1*h;
	printf("圆柱体积=%2.2f\n",V2);
	}
	

