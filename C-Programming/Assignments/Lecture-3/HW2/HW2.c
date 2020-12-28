/*
 * HW2.c
 *
 *  Created on: Dec 28, 2020
 *  Author: Abdelrahman Tarek Gaber
 *  Purpose: To solve the exercises in HW2
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	char prog_num;

	printf("List of available programs:\n1- Odd or Even\n2- Vowerl or Consonant \n3- Largest number among 3 numbers \n4- Positive or Negative "
		   "\n5- Alphabet or not \n6- Sum of Natural Numbers \n7- Factorial of a Number \n8- Simple Calculator \n\n");

	printf("Enter the number of the desired program: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &prog_num);

	switch(prog_num)
	{
		case '1': // Odd or Even
		{
			int num;

			printf("Enter an integer you want to check: ");
			fflush(stdin); fflush(stdout);
			scanf("%d", &num);

			if ( ( num % 2 ) == 0 )
			{
				printf("%d is even.", num);
			}
			else
			{
				printf("%d is odd.", num);
			}
			break;
		}

		case '2': // Vowel or Consonant
		{
			char letter;

			printf("Enter an alphabet: ");
			fflush(stdin); fflush(stdout);
			scanf("%c", &letter);

			switch(letter)
			{
				case 'A': case 'a': case 'E': case 'e': case 'I': case 'i': case 'O': case 'o': case 'U': case 'u':
					printf("%c is a vowel. \n", letter);
					break;

				default:
					printf("%c is a consonant. \n", letter);
					break;
			}

			break;
		}



		case '3': // Largest number among 3 numbers
		{
			float num1, num2, num3;

			printf("Enter three numbers: ");
			fflush(stdin); fflush(stdout);
			scanf("%f %f %f", &num1, &num2, &num3);

			if( num1 > num2 )
			{
				if( num1 > num3 )
				{
					printf("Largest number = %f", num1);
				}
				else
				{
					printf("Largest number = %f", num3);
				}
			}
			else if( num2 > num3 )
			{
				printf("Largest number = %f", num2);
			}
			else
			{
				printf("Largest number = %f", num3);
			}
			break;
		}

		case '4': // Positive or Negative
		{
			float num;

			printf("Enter a number: ");
			fflush(stdin); fflush(stdout);
			scanf("%f", &num);

			if( num > 0 )
			{
				printf("%f is positive.", num);
			}
			else if( num < 0 )
			{
				printf("%f is negative.", num);
			}
			else
			{
				printf("You entered zero.");
			}
			break;
		}

		case '5': // Alphabet or Not
		{
			char character;

			printf("Enter a character: ");
			fflush(stdin); fflush(stdout);
			scanf("%c", &character);

			if( ( character >= 65 && character <= 90 ) || ( character >= 97 && character <= 122 ) )
			{
				printf("%c is an alphabet.", character);
			}
			else
			{
				printf("%c is not an alphabet.", character);
			}
			break;
		}

		case '6': // Sum of natural numbers
		{
			int num, sum = 0, i;

			printf("Enter an integer: ");
			fflush(stdin); fflush(stdout);
			scanf("%d", &num);

			if( num < 0 )
			{
				printf("This is not a natural number.");
			}

			for(i = 1; i <= num; i++)
			{
				sum = sum + i;
			}

			printf("Sum = %d", sum);

			break;
		}

		case '7': // Factorial of a number
		{
			int num, factorial = 1, i;


			printf("Enter an integer: ");
			fflush(stdin); fflush(stdout);
			scanf("%d", &num);

			if(num == 0)
			{
				printf("Factorial = 1");
			}
			else if(num < 0)
			{
				printf("Error! Factorial of a negative number does not exist.");
			}
			else
			{
				for(i = 1; i <= num; i++)
				{
					factorial = factorial * i;
				}

				printf("Factorial = %d", factorial);
			}

			break;
		}

		case '8': // Simple Calculator
		{
			char operator;
			float num1, num2;

			printf("Enter operator (+, -, *, /) : ");
			fflush(stdin); fflush(stdout);
			scanf("%c", &operator);

			printf("Enter two operands: ");
			fflush(stdin); fflush(stdout);
			scanf("%f %f", &num1, &num2);

			switch(operator)
			{
				case '+':
					printf("%f + %f = %f", num1, num2, num1 + num2);
					break;

				case '-':
					printf("%f - %f = %f", num1, num2, num1 - num2);
					break;

				case '*':
					printf("%f * %f = %f", num1, num2, num1 * num2);
					break;

				case '/':
					printf("%f / %f = %f", num1, num2, num1 / num2);
					break;

				default:

					break;
			}


			break;
		}

		default:

			break;
	}

}

