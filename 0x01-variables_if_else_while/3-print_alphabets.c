#include <stdio.h>

/**
* main - print a-z and A-z using putchar
* Return: Always 0 (Success)
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
