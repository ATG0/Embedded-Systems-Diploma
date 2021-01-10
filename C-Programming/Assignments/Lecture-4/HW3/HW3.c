/*
 * HW3.c
 *
 *  Created on: Jan 10, 2021
 *      Author: Abdal
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char prog_num;

	printf("List of available programs: \n1- Sum of 2D Arrays \n2- Average of an Array \n3- Transpose of a Matrix \n4- Insert an Element \n5- Search for an Element \n");
	printf("6- Frequency of a Char \n7- Length of a String \n8- Reversing a String \n \n");

	printf("Enter the number of the desired program: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &prog_num);

	switch(prog_num)
	{
		case '1':		// Sum of 2D Arrays
		{
			float a[2][2], b[2][2], sum[2][2];
			int i, j;

			printf("Enter the elements of the 1st matrix: \n");

			for(i = 0; i < 2; i++)
			{
				for(j = 0; j < 2; j++)
				{
					printf("Enter a%d%d: ", i+1, j+1);
					fflush(stdin); fflush(stdout);
					scanf("%f", &a[i][j]);
				}
			}

			printf("Enter the elements of the 2nd matrix: \n");

			for(i = 0; i < 2; i++)
			{
				for(j = 0; j < 2; j++)
				{
					printf("Enter b%d%d: ", i+1, j+1);
					fflush(stdin); fflush(stdout);
					scanf("%f", &b[i][j]);
				}
			}

			for(i = 0; i < 2; i++)
			{
				for(j = 0; j < 2; j++)
				{
					sum[i][j] = a[i][j] + b[i][j];
				}
			}

			printf("Sum Of Matrix: \n");
			for(i = 0; i < 2; i++)
			{
				for(j = 0; j < 2; j++)
				{
					printf("%.2f\t", sum[i][j]);
				}
				printf("\n");
			}

			break;
		}

		case '2':		// Average of an Array
		{
			int n, i;
			float array[10], avg, sum = 0;

			printf("Enter the number of data: ");
			fflush(stdin); fflush(stdout);
			scanf("%d", &n);

			for(i = 1; i <= n; i++)
			{
				printf("%d. Enter number: ", i);
				fflush(stdin); fflush(stdout);
				scanf("%f", &array[i]);
			}

			for(i = 1; i <= n; i++)
			{
				sum = sum + array[i];
			}

			avg = sum / n;

			printf("Average = %.2f", avg);

			break;
		}
		case '3':		// Transpose of a Matrix

			break;

		case '4':		// Insert an Element

			break;

		case '5':		// Search for an Element

			break;

		case '6':		// Frequency of a Char

			break;

		case '7':		// Length of a String

			break;

		case '8':		// Reversing a String

			break;

		default:

			break;







	}







}




