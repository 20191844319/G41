// 4 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int h=10;
float d1,d2,d3,d4,x,y,x1=-2,y1=2,x2=-2,y2=-2,x3=2,y3=2,x4=2,y4=-2;
printf("请输入一坐标(x,y):");
scanf("%f,%f",&x,&y);
d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
d2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
d3=(x-x3)*(x-x3)+(y-y3)*(y-y3);
d4=(x-x4)*(x-x4)+(y-y4)*(y-y4);
if(d1>1 && d2>1 && d3>1 && d4>1) h=0;
printf("该点高度:%d\n",h);
return 0;
}

