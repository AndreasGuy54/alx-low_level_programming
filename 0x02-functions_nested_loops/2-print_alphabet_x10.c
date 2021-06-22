#include "holberton.h"

/**
* print_alphabet_x10 - print all alphabets ten times
* Return: 0 to exit
*/

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
