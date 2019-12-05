// 75.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>

int main(int argc, char* argv[])
{
	void f(char str[]);
	char str[100];
	printf("ÇëÊäÈë×Ö·û´®:");
	scanf("%s",str);
	f(str);
	printf("·´Ğò×Ö·û´®Îª:%s\n",str);
	return 0;
}
void f(char str[]){
	char t;
	int i,j;
	for(i=0,j=strlen(str);i<(strlen(str)/2);i++,j--){
		t=str[i];
		str[i]=str[j-1];
		str[j-1]=t;,
	}
}

