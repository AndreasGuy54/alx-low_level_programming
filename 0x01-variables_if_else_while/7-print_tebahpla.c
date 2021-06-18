#include <stdio.h>

/**
* main - print alphabets in reverse order
* Return: 0 to exit
*/

int main(void)
{
	char letter = 'z';

	while (letter <= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
