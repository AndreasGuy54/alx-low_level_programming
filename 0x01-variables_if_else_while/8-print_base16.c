#include <stdio.h>

/**
* main - print all hexadecimal base 16 numbers in lowercase
* Return: 0 to exit
*/

int main(void)
{
	int num = '0';
	int letters = 'a';

	while (num <= '9') /*prints 0-9*/
	{
		putchar(num);
		num++;
	}

	while (letters <= 'f') /*prints a-f*/
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}
