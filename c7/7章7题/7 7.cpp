// 7 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
int main(int argc, char* argv[])
{void cpy(char [],char[]);
char str[60],c[60];
printf("input string:\n");
gets(str);
cpy(str,c);
printf("vovel letters are:%s\n",c);
return 0;
}

void cpy(char a[],char c[])
{int i,j;
for(i=0,j=0;a[i]!='\0';i++){
	if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
	{c[j]=a[i];
	j++;}
	else
		c[j]='\0';
}
}



