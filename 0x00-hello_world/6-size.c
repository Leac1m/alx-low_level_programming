#include <stdio.h>

/*
A script to check storage size of varables
*/	
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\nSize of a int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of long long int: %d byte(s)\nSize of a float: %d byte(s)\n" , (unsigned long)sizeof(a) ,(unsigned long)sizeof(b) ,(unsigned long)sizeof(c) ,(unsigned long)sizeof(d) ,(unsigned long)sizeof(e));

	return (0);

}


