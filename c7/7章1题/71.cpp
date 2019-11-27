// 71.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int f1(int,int);
	int f2(int,int,int);
	int x,y,m,n;
	scanf("%d,%d",&x,&y);
	m=f1(x,y);
	printf("最大公约数=%d\n",m);
	n=f2(x,y,m);
	printf("最小公倍数=%d\n",n);
	return 0;
}

int f1(int x,int y){
	int t,r;
	if(y>x){
		t=x;x=y;y=t;
	}
	while((r=x%y)!=0){
		x=y;
		y=r;
	}
	return(y);
}

int f2(int x,int y,int m){
	return(x*y/m);
}

