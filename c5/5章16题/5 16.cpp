// 5 16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int i,m,n;
for(i=1;i<=4;i++)
{	for(m=1;m<=4-i;m++)
	{printf(" ");
	}
	for(n=1;n<=2*i-1;n++)
	{
	printf("*");
	}
printf("\n");
}
for(i=1;i<=3;i++)
{  for(n=1;n<=i;n++)
	{
	printf(" ");
	}
	for(m=1;m<=7-2*i;m++)
	{
	printf("*");
	}
printf("\n");
}
	return 0;
}

