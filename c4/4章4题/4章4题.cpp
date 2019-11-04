// 4ีย4ฬโ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	int a,b,c,t;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
		t=a;
	else t=b;
	if(c>t)
		t=c;
	printf("%d\n",t);
	return 0;
}

