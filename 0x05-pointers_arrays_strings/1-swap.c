#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swappped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the fuction that swaps the two integers* */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
