// 48gxl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float score;
	printf("���������:");
	scanf("%f",&score);
	if(score>100||score<0)
		printf("�ɼ�����\n");
	else if(score>=90)
		printf("�ɼ��ȼ�ΪA\n");
	else if(score>=80)
		printf("�ɼ��ȼ�ΪB\n");
	else if(score>=70)
		printf("�ɼ��ȼ�ΪC\n");
	else if(score>=60)
		printf("�ɼ��ȼ�ΪD\n");
	else
		printf("�ɼ��ȼ�ΪE\n");

	return 0;
}

