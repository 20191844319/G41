// 509.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int i,n=20;
double a=2,b=1,s=0,t;
for(i=1;i<=n;i++)
{s=s+a/b;
t=a;
a=a+b;
b=t;}
   printf("sum=%16.10f",s);
	return 0;
}

