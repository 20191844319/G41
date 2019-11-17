// pi3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double numerator=1,denominator=3;
	double pi=1,item,newpi=1;
	while(numerator<1000){
		item=(numerator/denominator);
		pi=pi*item;
		newpi=newpi+pi;
		numerator++;	
		denominator=denominator+2;
	}
	newpi=newpi*2;
	printf("%10.8f\n",newpi);
	return 0;
}

