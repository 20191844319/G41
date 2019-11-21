// 5 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int day,n=1;
	for(day=9;day>0;day--)
		n=2*(n+1);
	printf("total=%d\n",n);
	return 0;
}

