// 56.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int n;
	double m=1,sum=0;
	for(n=1;n<=20;n++){
		m=m*n;
		sum=sum+m;
	}
	printf("1!+2!+3!+4!+бн+20!=%f\n",sum);
	return 0;
}

