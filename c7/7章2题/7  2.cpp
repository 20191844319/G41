// 7  2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
float x1,x2,p,q,disc;
int main(int argc, char* argv[])
{void smaller_than_zero(float,float);
void greater_than_zero(float,float);
void equal_to_zero(float,float);
float a,b,c;
printf("input a b c:\n");
scanf("%f%f%f",&a,&b,&c);
printf("equation:%5.2fx*x+%5.2f*x+%5.2f=0",a,b,c);
disc=b*b-4*a*c;
printf("root:\n");
if(disc>0)
{greater_than_zero(a,b);
printf("x1=%f\tx2=%f",x1,x2);
}
else if(disc==0)
{equal_to_zero(a,b);
printf("x1=%f\tx2=%f",x1,x2);
}
else
{smaller_than_zero(a,b);
printf("x1=%f+%f\tx2=%f-%f",p,q,p,q);
}
return 0;
}

void smaller_than_zero(float a,float b)
{p=-b/(2*a);
q=sqrt(disc)/(2*a);
}
void greater_than_zero(float a,float b)
{x1=(-b+sqrt(disc))/(2*a);
x2=(-b-sqrt(disc))/(2*a);
}
void equal_to_zero(float a,float b)
{x1=x2=(-b)/(2*a);
}

