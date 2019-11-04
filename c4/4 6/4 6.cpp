// 4 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int x,y;
	printf("ÊäÈëx");
	scanf("%d",&x);
	if (x>=1)
		if(x>=10)
		{y=3*x-11;
		printf("x=%d,y=3*x-11=%d\n",x,y);
		}
		else
		{y=2*x-1;
		printf("x=%d,y=2*x-1=%d\n",x,y);
		}
	else
	{y=x;
	printf("x=%d,y=x=%d\n",x,y);
	}
	return 0;
}

