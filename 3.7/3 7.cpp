// 3 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include<stdio.h>
int main(int argc, char* argv[])
{
float r,h,pi=3.141592,C,S1,S2,V1,V2;

	printf("������Բ���İ뾶�͸�\n");
	scanf("%f%f",&r,&h);
	C=4*pi*r;
	printf("Բ�ܳ�=%2.2f\n",C);
	S1=pi*r*r;
	printf("Բ���=%2.2f\n",S2);
	V1=(4/3)*pi*r*r*r;
	printf("Բ�����=%2.2f\n",V1);
	V2=S1*h;
	printf("Բ�����=%2.2f\n",V2);
	}
	

