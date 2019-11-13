// 5  5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int main(int argc, char* argv[])
{
 int n, a,i=1,s=0,t=0;
 printf("a,n=\n");
 scanf("%d,%d",&a,&n);
 while(i<=n)
 {t=t+a;
 s=t+s;
 a=a*10;
	 ++i;
 }
	printf("a+aa+aaa...=%d\n",s);
	return 0;
}



