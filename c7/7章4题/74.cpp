// 74.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int array[3][3];
int main(int argc, char* argv[])
{
	void f(int array[3][3]);
	int i,j;
	printf("请输入数组:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&array[i][j]);
	printf("\n原始数组:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%5d",array[i][j]);
			printf("\n");
	}
	f(array);
	printf("行列互换后的数组:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%5d",array[i][j]);
			printf("\n");
	}
	return 0;
}
void f(int array[3][3]){
	int i,j,t;
	for(i=0;i<3;i++)
		for(j=i+1;j<3;j++){
			t=array[i][j];
			array[i][j]=array[j][i];
			array[j][i]=t;
		}
}

