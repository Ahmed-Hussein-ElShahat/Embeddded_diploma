/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	long long fact=1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&a);
	if(a>0)
	{
		for(int i=2; i<a; i++)fact *= i;
		printf("Factorial = %lld",fact);
	}
	else printf("Error!!! Factorial of negative number doesn't exist");
	return EXIT_SUCCESS;
}
