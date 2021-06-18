#include <stdio.h>

/**
* main - print 00 to 99, 0-9, comma separated
* Return: 0 to exit
*/

int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++) /*increase tens*/
	{
		for (ones = (tens + 1); ones <= '9'; ones++) /*increase ones*/
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9') /*comma separation*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
