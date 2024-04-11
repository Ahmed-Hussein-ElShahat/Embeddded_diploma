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
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&a);
	int sum=0;
	for(int i=1; i<=a; i++) sum += i;
	printf("Sum = %d",sum);
	return EXIT_SUCCESS;
}
