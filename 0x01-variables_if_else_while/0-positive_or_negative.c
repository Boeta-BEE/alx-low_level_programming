#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main -Prints if number is positive, zero or negative
 * Return: Always (Success)
 *
 */


int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%s is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%s is zero\n", n);
	}
	else
	{
	printf("%s is negative\n", n);
	}
	return (0);

}
