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
	printf("%s∖n"" is positive ", n);
	}
	else if (n == 0)
	{
	printf("%s∖n"" is zero ", n);
	}
	else
	{
	printf("%s∖n"" is negative ", n);
	}
	return (0);

}
