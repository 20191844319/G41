// 48gxl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float score;
	printf("请输入分数:");
	scanf("%f",&score);
	if(score>100||score<0)
		printf("成绩错误\n");
	else if(score>=90)
		printf("成绩等级为A\n");
	else if(score>=80)
		printf("成绩等级为B\n");
	else if(score>=70)
		printf("成绩等级为C\n");
	else if(score>=60)
		printf("成绩等级为D\n");
	else
		printf("成绩等级为E\n");

	return 0;
}

