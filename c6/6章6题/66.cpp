// 66.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int i,j,a[10][10];
for(i=0;i<10;i++){
	for(j=0;j<10;j++){
		a[i][j]=0;
	}
}
for(i=0;i<10;i++){
	a[i][0]=1;
}
for(i=1;i<10;i++){
	for(j=1;j<10;j++){
		a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
}
for(i=0;i<10;i++){
	for(j=0;j<10;j++){
		if(a[i][j]!=0)
		printf("%5d",a[i][j]);
	}
	printf("\n");
}
printf("\n");
	return 0;
}

