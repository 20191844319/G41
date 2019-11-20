// 509.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int i,n=20;
double a=100,b=0,c;
for(i=1;i<=10;i++)
{b=2*a+b;
a=a/2;}
b=b-100;
printf("%f\n,%f",b,a);

	return 0;
}

