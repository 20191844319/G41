// as.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>

int main(int argc, char* argv[])
{int sign=1;
double pi=0.0,n=1.0,x=1.0;
while(fabs(x)>=1e-6)
{
	pi=pi+x;
     n=n+2;
   sign=-sign;
    x=sign/n;
}
pi=pi*4;
printf("pi=%10.8f\n",pi);
return 0;
}


