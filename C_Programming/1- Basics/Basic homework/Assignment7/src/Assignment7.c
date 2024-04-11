/*
 ============================================================================
 Name        : Assignment7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
		printf("Enter value of a: ");
		fflush(stdout);
		scanf("%f",&a);
		printf("Enter value of b: ");
		fflush(stdout);
		scanf("%f",&b);
		printf("After swaping value of a: %.2f\nAfter swaping value of b: %.2f",b,a);
	return EXIT_SUCCESS;
}
