#include <stdio.h>

/**
* main - print a-z in lowercase
* Return: 0 to exit
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
