// 513.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>

int main(int argc, char* argv[])
{
	float x1=1.0,x2,a;
	printf("enter a number:");
	scanf("%f",&a);
	x2=(x1+a/x1)/2;
	while(fabs(x2-x1)>=1e-5){
		x1=x2;
		x2=(x1+a/x1)/2;
	
	}
	printf("%f\n",x1);
	return 0;
}

