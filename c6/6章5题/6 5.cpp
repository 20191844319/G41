// 6 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define N 5
int main(int argc, char* argv[])
{int a[N],i,t;
printf("����һ������:\n");
for(i=0;i<N;i++){
	scanf("%d",&a[i]);
}
printf("array a:\n");
for(i=0;i<N;i++){
	printf("%d ",a[i]);
}
printf("\n");
printf("array a:\n");
for(i=0;i<N/2;i++){
	t=a[i];
	a[i]=a[N-i-1];
	a[N-i-1]=t;
}
for(i=0;i<N;i++){
	printf("%d ",a[i]);
}
printf("\n");
	return 0;
}

