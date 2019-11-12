// 13 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int x,y,i,z,a,b;
printf("请输入两个正整数:");
scanf("%d %d",&x,&y);
i=(x>y)? x:y;
for(a=i;a>0;a--)
{if(x%a==0&&y%a==0) break;
}
z=(x<y)? x:y;
for(b=z;b>=z;b++)
{if(b%x==0&&b%y==0) break;
}
printf("%d\n%d\n",a,b);
	return 0;
}
