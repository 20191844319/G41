// 7 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>
int main(int argc, char* argv[])
{void insert(char []);
char str[80];
printf("����������:\n");
scanf("%s",str);
insert(str);
return 0;
}

void insert (char str[])
{int i;
for(i=strlen(str);i>0;i--){
	str[2*i]=str[i];
	str[2*i-1]=' ';
}
printf("output:\n%s\n",str);
}

