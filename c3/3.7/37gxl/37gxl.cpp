// 37gxl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float r,h,C,S,S1,V1,V2,pi=3.14;
	printf("������뾶�͸�:");
	scanf("%f%f",&r,&h);
	C=2*pi*r;
	printf("Բ���ܳ�Ϊ%.2f\n",C);
	S=pi*r*r;
	printf("Բ�����Ϊ%.2f\n",S);
	S1=4*pi*r*r;
	printf("Բ������Ϊ%.2f\n",S1);
	V1=(4/3)*pi*r*r;
	printf("Բ�����Ϊ%.2f\n",V1);
	V2=S*h;
	printf("Բ�������Ϊ%.2f\n",V2);

	return 0;
}

