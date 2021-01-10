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
		{
			int rows, columns;
			int matrix[10][10];
			int i, j;

			printf("Enter the number of rows and columns of the matrix: ");
			fflush(stdin); fflush(stdout);
			scanf("%d %d", &rows, &columns);

			for(i = 0; i < rows; i++)
			{
				for(j = 0; j < columns; j++)
				{
					printf("Enter elements a%d%d: ", i+1, j+1);
					fflush(stdin); fflush(stdout);
					scanf("%d", &matrix[i][j]);
				}
			}

			printf("\n");
			printf("Entered Matrix: \n");
			for(i = 0; i < rows; i++)
			{
				for(j = 0; j < columns; j++)
				{
					printf("%d\t ", matrix[i][j]);
				}
				printf("\n");
			}

			printf("\n");
			printf("Transpose of Matrix: \n");
			for(i = 0; i < columns; i++)
			{
				for(j = 0; j < rows; j++)
				{
					printf("%d\t ", matrix[j][i]);
				}
				printf("\n");
			}

			break;
		}

		case '4':		// Insert an Element
		{
			int array[10];
			int num, i, new_element, location, flag = 0;

			printf("Enter no of elements: ");
			fflush(stdin); fflush(stdout);
			scanf("%d", &num);

			for(i = 1; i <= num; i++)
			{
				array[i] = i;
				printf("%d ", array[i]);
			}

			printf("\n");
			printf("Enter the element to be inserted: ");
			fflush(stdin); fflush(stdout);
			scanf("%d", &new_element);

			printf("Enter the location: ");
			fflush(stdin); fflush(stdout);
			scanf("%d", &location);


			for(i = 1; i <= (num + 1); i++)
			{

				if (flag)
				{
					array[i] = i - 1;
				}
				if(i == location)
				{
					array[i] = new_element;
					flag = 1;				// A flag to check if an insertion has an occurred, if the flag is set then the other elements in the array will be adjusted.
				}

				printf("%d ", array[i]);
			}

			break;
		}

		case '5':		// Search for an Element
		{
			int array[10];
			int search_target, location, num, i, found = 0;

			printf("Enter no of elements: ");
			fflush(stdin); fflush(stdout);
			scanf("%d", &num);

			for(i = 1; i <= num; i++)
			{
				array[i] = i * 11;
				printf("%d ", array[i]);
			}

			printf("\n");
			printf("Enter the elements to be searched: ");
			fflush(stdin);fflush(stdout);
			scanf("%d", &search_target);

			for(i = 0; i < num; i++)
			{
				if (array[i] == search_target)
				{
					location = i;
					found = 1;
				}
			}

			if(found == 1)
			{
				printf("Number found at the location = %d", location);
			}
			else
			{
				printf("Target wasn't found.");
			}

			break;
		}

		case '6':		// Frequency of a Char
		{
			char text[100], search_target;
			int frequency = 0, i = 0;

			printf("Enter a string: ");
			fflush(stdin); fflush(stdout);
			gets(text);

			printf("Enter a character to find frequency: ");
			fflush(stdin); fflush(stdout);
			scanf("%c", &search_target);

			while(text[i] != '\0')
			{
				if (text[i] ==  search_target)
				{
					frequency++;
				}
				i++;
			}

			printf("Frequency of %c = %d", search_target, frequency);

			break;
		}

		case '7':		// Length of a String
		{
			char text[100];
			int length = 0, i = 0;

			printf("Enter a string: ");
			fflush(stdin); fflush(stdout);
			scanf("%s", text);

			while(text[i] != '\0')
			{
				length++;
				i++;
			}

			printf("Length of string: %d", length);

			break;
		}

		case '8':		// Reversing a String
		{
			char text[100], reversed_string[100];
			int length, i = 0;

			printf("Enter the string : ");
			fflush(stdin); fflush(stdout);
			gets(text);

			length = strlen(text);

			while(text[i] != '\0')
			{
				reversed_string[length - 1 - i] = text[i];
				i++;
			}

			printf("Reverse string is : %s ", reversed_string);

			break;
		}
		default:

			break;







	}







}




