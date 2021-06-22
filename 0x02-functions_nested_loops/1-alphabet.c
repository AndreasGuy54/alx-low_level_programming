#include "holberton.h"

/**
 * print_alphabet - print all alphabets
 * Return: 0 to exit
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
