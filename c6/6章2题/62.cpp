// 62.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j,min,temp,a[11];
	printf("enter number:\n");
	for(i=1;i<=10;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("The orginal numbers:\n");
	for(i=1;i<=10;i++)
		printf("%5d",a[i]);
	printf("\n");
	for(i=1;i<=9;i++){
		min=i;
		for(j=i;j<=10;j++)
			if(a[min]>a[j]) 
				min=j;
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("\nThe sorted numbers:\n");
	for(i=1;i<=10;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}

