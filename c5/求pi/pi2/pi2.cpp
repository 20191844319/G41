// pi2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double pi=1,numerator=2,denominator=1;
	double item=2;
	
	while(numerator<10000000){
		item=(numerator/denominator);
		pi=pi*item;
		denominator=denominator+2;
		item=(numerator/denominator);
		pi=pi*item;
		numerator=numerator+2;

	}
	pi=pi*2;
	printf("%10.8f\n",pi);
	return 0;
}

