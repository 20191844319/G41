// sushu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
 #include<stdio.h> 
 #include<time.h>  
 #include<math.h> 
 int main(int argc, char* argv[]) 
 { 
 double begintime, endtime; 
 int a = 2; 
 double t = 0;  
 begintime = clock();  
 for ( int i = 3; i <= 1000000; i += 2) 
 { 
 double t = sqrt(i); 
 for (int j = 2; j <= t; j++) 
 { 
 if (i % j == 0)  
 break; 
 if (j ==floor(t)) 
 a++; 
 } 
  
 } 
 endtime = clock();  
 printf("1000000内共有素数 %d 个\n", a); 
 printf("Running Time：%lfs\n", (endtime - begintime) / 1000); 
 return 0; 
 } 
