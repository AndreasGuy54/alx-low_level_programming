#include <stdio.h>

/**
* main - print 0-9, separate by commas
* Return: 0 to exit
*/

int main(void)
{
	int num = '0';

	while (num <= '9') /*prints 0-9*/
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		)
		num++;
	}

	putchar('\n');

	return (0);
}
