/*
 * Christine Vu
 * 7/1/16
 * TCSS 333
 * sort2.c
 * Sort 2 is selection sort.
 * Selection Sort code is found at http://www.programmingsimplified.com/c/source-code/c-program-selection-sort.
 */

#include "sort2.h"

void sort2(int *a, int n) {

	/* for as long as i is not the last element of array a */
	for (int i = 0 ; i < ( n - 1 ) ; i++ )
	{
		/* make the position equal to i */
		int position = i;

		/* for as long as j is not the last element of array a */
		for (int j = i + 1 ; j < n ; j++ )
		{
			/* if the number is greater than the next number */
			if ( a[position] > a[j] )
			{
				/* make the current position be j */
				position = j;
			}
		}

		/* if the position is not i */
		if ( position != i )
		{
			/* swap the values */
			int temp = a[i];
			a[i] = a[position];
			a[position] = temp;
		}
	}
}
