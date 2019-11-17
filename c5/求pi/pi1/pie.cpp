// pie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>

int main(int argc, char* argv[])
{
	double pi=0.0,n=1.0,term=1.0;
	while(term>=1e-10){
		pi=pi+term;
		n++;
		term=1/(n*n);
	}
	pi=sqrt(6*pi);
	printf("pi=%10.8f\n",pi);
	return 0;
}

