/*
 * Lab.c
 *
 *  Created on: Dec 28, 2020
 *  Author: Abdelrahman Tarek Gaber
 *  Purpose: Solve the final lab in the slides
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, j, k;

	for( i = 0; i < 10; i++)
	{
		k = 0;
		for( j = 10; j > 0; j--)
		{
			if( k >= i )
			{
				printf("%d ", k);
			}

			k++;
		}
		printf("\n");
	}
}

