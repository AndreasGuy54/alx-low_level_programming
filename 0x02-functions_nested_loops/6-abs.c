#include "holberton.h"

/**
* _abs - compute the absolute value of an integer
* @n: integer argument
* Return: computed absolute value on success, 0 on fail
*/

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
