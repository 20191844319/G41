// 7 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdlib.h>
#include<string.h>
void stob(char s[]);
int main(int argc, char* argv[])
{
	char str[11];
	gets(str);
	stob(str);
	puts(str);
	system("pause");
	return 0; }
void stob(char s[])
{
int i,j;
 char temp;
 for(i=0;i<9;i++)
	 for(j=0;j<9-i;j++)
		 if(s[j]>s[j+i]){
			 temp=s[j];
			 s[j]=s[j+1];
			 s[j+1]=temp;}}





	