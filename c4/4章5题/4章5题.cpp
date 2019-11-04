// 4章5题.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int a,c;
	double b,d;
	scanf("%d",&a);
	if(a>0 && a<1000)
	{
		b=sqrt(a);
		printf("%2.0f\n",b);
	}
	else
	{
		printf("请重新输入一个小于1000的正数\n");
		scanf("%d",&c);
	}
	d=sqrt(c);
	printf("%2.0f\n",d);
	
	
	return 0;
}

