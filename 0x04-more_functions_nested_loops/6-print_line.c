#include "holberton.h"

/**
* print_line - Draw a straight line by printing "_"
* @n: number of characters to draw
*/

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
