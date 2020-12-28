/*
 * HW1.c
 *
 *  Created on: Dec 28, 2020
 *  Author: Abdelrahman Tarek Gaber
 *  Purpose: To solve all HW1 exercises.
 */
#include <stdio.h>
#include <stdlib.h>

void main()
{
	char prog_num;

	printf("List of available programs:\n1- Display C-Programming\n2- Enter an integer then display it \n3- The sum of two integers \n"
			"4- Product of two float numbers \n5- ASCII Value of a Character \n6- Swap two numbers \n7- Swap two numbers without a temp variable \n\n");

	printf("Enter the number of the desired program: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &prog_num);

	switch(prog_num)
	{
	case '1':  // Print C Programming
		printf("C Programming");

		break;

	case '2':  // Enter a number then display it
	{
		int number;

		printf("Enter an integer: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &number);

		printf("You entered: %d", number);

		break;
	}

	case '3':	// Sum of two integers
	{
		int num1, num2;

		printf("Enter two integers: ");
		fflush(stdin); fflush(stdout);
		scanf("%d %d", &num1, &num2);

		printf("Sum = %d", num1 + num2);

		break;
	}
	case '4':	// Product of two floats
	{
		float num1, num2;

		printf("Enter two numbers: ");
		fflush(stdin); fflush(stdout);
		scanf("%f %f", &num1, &num2);

		printf("Product = %f", num1 * num2);

		break;
	}
	case '5':	// ASCII value of a character
	{
		char character;

		printf("Enter a character: ");
		fflush(stdin); fflush(stdout);
		scanf("%c", &character);

		printf("ASCII value of %c = %d", character, character);

		break;
	}
	case '6':	// Swap two numbers
	{
		float a, b, temp;

		printf("Enter value of a: ");
		fflush(stdin), fflush(stdout);
		scanf("%f", &a);

		printf("Enter value of b: ");
		fflush(stdin), fflush(stdout);
		scanf("%f", &b);

		temp = a;
		a = b;
		b = temp;

		printf("After swapping, value of a = %f \n", a);
		printf("After swapping, value of b = %f", b);

		break;
	}
	case '7':	// Swap two numbers without a temp variable
	{
		float a, b;

		printf("Enter value of a: ");
		fflush(stdin), fflush(stdout);
		scanf("%f", &a);

		printf("Enter value of b: ");
		fflush(stdin), fflush(stdout);
		scanf("%f", &b);

		a = a + b;
		b = a - b;
		a = a - b;

		printf("After swapping, value of a = %f \n", a);
		printf("After swapping, value of b = %f", b);

		break;
	}
	default:

		break;
	}







}

