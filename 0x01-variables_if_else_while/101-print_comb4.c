#include <stdio.h>

/**
* main - print all the combinations of three different digits
* Return: 0 to exit
*/

int main(void)
{
	int ones;
	int tens;
	int hundredths;

	for (hundredths = '0'; hundredths <= '9'; hundredths++) /*increase hundredths*/
	{
		for (tens = (hundredths + 1); tens <= '9'; tens++) /*increase tens=*/
		{
			for (ones = (tens + 1); ones <= '9'; ones++) /*increase ones*/
			{
				putchar(hundredths);
				putchar(tens);
				putchar(ones);
				if (hundredths != '7' || tens != '8' || ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
