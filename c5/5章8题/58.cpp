// 58.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a1,a2,a3;
	for(a1=1;a1<=9;a1++){
		for(a2=0;a2<=9;a2++){
			for(a3=0;a3<=9;a3++){
				if(a1*100+a2*10+a3==a1*a1*a1+a2*a2*a2+a3*a3*a3)
					printf("%d\n",a1*100+a2*10+a3);
			}
		}
	}
	return 0;
}

