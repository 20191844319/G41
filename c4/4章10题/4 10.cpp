// 4 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int i;
double bonus,bon1,bon2,bon4,bon6,bon10;
bon1=10000*0.1;
bon2=bon1+10000*0.075;
bon4=bon2+20000*0.05;
bon6=bon4+20000*0.03;
bon10=bon6+40000*0.015;
printf("请输入当月利润:");
scanf("%d",&i);
if(i<=10000)
bonus=i*0.1;
else if(i<=20000)
bonus=bon1+(i-10000)*0.075;
else if(i<=40000)
bonus=bon2+(i-20000)*0.05;
else if(i<=60000)
bonus=bon4+(i-40000)*0.03;
else if(i<=100000)
bonus=bon6+(i-60000)*0.015;
else
bonus=bon10+(i-100000)*0.01;
printf("\n奖金总数为:%10.2f\n",bonus);
	return 0;
}

