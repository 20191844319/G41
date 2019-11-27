// 611.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int i,j,a[5][9];
for(i=0;i<5;i++){
	for(j=0;j<9;j++){
		a[i][j]=0;
	}
}
for(i=0;i<5;i++){
	for(j=i;j<=i+4;j++){
		a[i][j]='*';
	}
}
for(i=1;i<=4;i++){
	for(j=0;j<=i-1;j++){
		a[i][j]=' ';
	}
}
for(i=0;i<5;i++){
	for(j=0;j<9;j++){
		if(a[i][j]!=0)
			printf("%c",a[i][j]);
	}
	printf("\n");
}
printf("\n");		
	return 0;
}