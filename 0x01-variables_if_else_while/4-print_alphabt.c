#include <stdio.h>

/**
* main - print a-z without q and e
* Return: 0 to exit
*/

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*prints a-z*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*prints A-Z*/
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
