#include <stdio.h>

/**
* main - 1 to 100,
* multiples of 3 -  Fizz,
* multiples of 5 - Buzz
* and multiple of both 3 and 5 - FizzBuzz
* Return: 0 to exit
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
