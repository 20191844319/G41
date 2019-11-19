// pie 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<math.h>
int main(int argc, char* argv[])
{
double pi=0,a=1,n=1;

while(fabs(a)>=1e-6)
{pi=pi+a;
n=n+2;
a=1/(n*n);
}
pi=sqrt(8*pi);

printf("pi的近似值为%10.8f\n",pi);


	return 0;
}

