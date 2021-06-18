#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point of the program
* Return: 0 to exit
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i and is ", n, (n % 10));

	if ((n % 10) == 10)
	{
		printf("and is 0\n");
	}
	else if ((n % 10) > 5)
	{
		printf("and greater than 5\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
