#include "main.h"


/**
 * _isaplha - checks character
 * @c: the specific character thats checked
 * Return: 1 fot alphabet, 0 for anything else
 */

int _isalpha(int c)

{

	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);

}
