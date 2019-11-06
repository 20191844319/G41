// 4 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{float score;
 char grade;
	printf("请输入成绩\n");
	scanf("%f",&score);
	while(score>100||score<0)
	{printf("\n输入成绩有误");
	scanf("%f",&score);}
	switch((int)(score/10))
	{case 10:
	case 9:grade='A';break;
	case 8:grade='B';break;
	case 7:grade='C';break;
	case 6:grade='D';break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:grade='E';
	}
	printf("%5.1f,%c\n",score,grade);
	return 0;
}
