// 5  17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{char i,m,n;
for(i='X';i<='Z';i++){
	for(m='X';m<='Z';m++){
		if(i!=m)
			for(n='X';n<='Z';n++){
				if(i!=n&&m!=n)
                 if(i!='X'&&n!='X'&&n!='Z')
                   printf("A--%c\nB--%c\nC--%c\n",i,m,n);
			}
	}
}
	return 0;
}

