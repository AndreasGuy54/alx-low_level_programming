#include <stdio.h>

/**
* main - print a-z without the letters q and e
* Return: 0 to exit
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z') /*checks a-z*/
	{
		if ((letter != 'q') && (letter != 'e')) /*removes q and e*/
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
