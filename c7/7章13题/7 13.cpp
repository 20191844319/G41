// 7 13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int n,x;
	float p(int n,int x);
	printf("input n,x:");
	scanf("%d,%d",&n,&x);
	printf("P%d(%d)=%6.2f\n",n,x,p(n,x));
	return 0;
}
float p(int n,int x)
{
	if(n==0)
		return (1);
	else if(n==1)
		return(x);
	else
		return((2*n-1)*x-p((n-1),x)-(n-1)*p((n-2),x))/n;
}