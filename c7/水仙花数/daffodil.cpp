// daffodil.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <time.h>

int main(int argc, char* argv[])
{
	int i,j,n,x;			// x��ʾλ��
	int a[10];
	int sum=0;
	int item;
	long t0,t1;
	t0=clock();
	for(i=100;i<=999999999;i++){
		x=log10(i)+1;
		j=i;
		sum=0;
		for(n=1;n<=x;n++){
			a[n]=j%10;			// ��һ��ѭ���Ǹ�λ����,�ڶ���ѭ����ʮλ���֡���
			j=j/10;
			item=pow(a[n],x);
			sum=sum+item;
		}
		if(sum==i)
		printf("%d ",sum);

	}
	t1=clock();
	printf("\nTime used:%10.2f seconds\n",(t1-t0)/(float)CLOCKS_PER_SEC);
	return 0;
}

