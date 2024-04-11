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
	char op;
	printf("Enter an operator either + or - or * or divide: ");
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter two operands: ");
	float a,b;
	fflush(stdout);
	scanf("%f %f",&a,&b);
	switch (op)
	{
	case '+':

		printf("%f %c %.2f = %.2f",a,op,b,a+b);

		break;
	case '-':

		printf("%.2f %c %.2f = %.2f",a,op,b,a-b);

		break;
	case '*':

		printf("%.2f %c %.2f = %.2f",a,op,b,a*b);

		break;
	case '/':

		if(b==0)
		{
			printf("Invalid input");
			break;
		}
		printf("%.2f %c %.2f = %.2f",a,op,b,a/b);

		break;

	default:
		printf("Error! operator not correct");
		break;
	}
	return EXIT_SUCCESS;
}
