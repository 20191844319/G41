// 515.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{float x0,x1,x2,fx1,fx2,fx0;
do
{printf("输入x1,x2:");
scanf("%f,%f",&x1,&x2);
fx1=x1*((2*x1-4)*x1+3)-6;
fx2=x2*((2*x2-4)*x2+3)-6;
}while(fx1*fx2>0);
do
{x0=(x1+x2)/2;
fx0=x0*(x0*(2*x0-4)+3)-6;
if(fx0*fx1<0)
{
	x2=x0;
    fx2=fx0;
}
else
{x1=x0;
fx1=fx0;
}
}while(fabs(fx0)>1e-5);
printf("方程的根为:%f",x0);
	return 0;
}

