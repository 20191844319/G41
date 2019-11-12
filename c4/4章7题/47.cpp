// 47.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int x,y;
printf("enter x:");
scanf("%d",&x);
y=-1;
if(x!=0){
	if(x>0)
		y=1;
}
else 
  y=0;
printf("x=%d,y=%d\n",x,y);
return 0;
}



