// 4 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int t,a,b,c,d;
printf("������4������:");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b)
{t=a;a=b;b=t;}
if(a>c)
{t=a;a=c;c=t;}
if(a>d)
{t=a;a=d;d=t;}
if(b>c)
{t=b;b=c;c=t;}
if(b>d)
{t=b;b=d;d=t;}
if(c>d)
{t=c;c=d;d=t;}
printf("%d %d %d %d\n",a,b,c,d);
	return 0;
}

