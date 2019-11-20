// 111.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int m,s,i;
 for(m=2;m<1000;m++)
 {s=0;
 for(i=1;1<m;i++)
	 if((m%i)==0) s=s+i;
	 if(s==m)
	 {printf("%d,its factors are",m);
	 for(i=1;i<m;i++)
		 if(m%i==0) printf("%d",i);
	 printf("\n");
	 }
 }
	return 0;
}

