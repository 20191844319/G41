// 610.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{char text[3][80];
int big=0,small=0,digit=0,space=0,other=0,i,j;
for(i=0;i<3;i++){
	printf("��%d������:\n",i+1);
	gets(text[i]);
	for(j=0;j<80&&text[i][j]!='\0';j++){
		if(text[i][j]>'a'&&text[i][j]<'z')
			small++;
		else if(text[i][j]>'A'&&text[i][j]<'Z')
			big++;
		else if(text[i][j]==' ')
			space++;
		else if(text[i][j]>='0'&&text[i][j]<='9')
			digit++;
		else
			other++;
	}
}
printf("��д��ĸ:%d\nСд��ĸ:%d\n����:%d\n�ո�:%d\n�����ַ�:%d\n",big,small,digit,space,other);
	return 0;
}

