#include <stdio.h>

/**
* main - print 0-9 using putchar
* Return: 0 to exit
*/

int main(void)
{
	int num = '0';

	while (num < '10')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
