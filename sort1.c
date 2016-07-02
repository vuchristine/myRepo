/*
 * Christine Vu
 * 7/1/16
 * TCSS 333
 * sort1.c
 * Sort 1 is bubble sort.
 * Bubble Sort code is found at http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort.
 */

#include "sort1.h"

void sort1(int *a, int n) {

    /* for as long as it doesn't reach the end of the array */
    for (int i = 0 ; i < ( n - 1 ); i++)
    {
        /* for as long as it doesn't reach the last element of array */
        for (int j = 0 ; j < ( n - i - 1 ); j++)
        {
       	    /* if the number is greater than the next number */
	    if (a[j] > a[j+1])
	    {
		/* Swapping */
	        int temp = a[j];
	        a[j] = a[j+1];
	        a[j+1] = temp;
	    }
        }
    }
}
