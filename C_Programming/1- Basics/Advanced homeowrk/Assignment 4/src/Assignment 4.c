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
	float a;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&a);
	a>0 ? printf("%.2f is positive",a) : (a==0 ? printf("You entered zero") : printf("%.2f is negative",a) );
	return EXIT_SUCCESS;
}
