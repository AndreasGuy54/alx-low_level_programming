#include <stdio.h>

/**
* main - print 00-99 and single digits, no duplicates, comma separated
* Return: 0 to exit
*/

int main(void)
{
	int tens = '0';
	int ones = ++tens;

	while (tens <= '9') /*increases tens until 9*/
	{
		while (ones <= '9') /*increases ones until 9*/
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9')
			{
				putchar(',');
				putchar(' ');
			}
			ones++;
		}
		tens++;
	}

	putchar('\n');

	return (0);
}
