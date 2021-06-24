#include "holberton.h"

/**
* _isupper - Uppercase character check
* @c: character to be checked
* Return: 1 if true, 0 to exit
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
