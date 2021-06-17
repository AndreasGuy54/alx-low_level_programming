#include<stdio.h>

/**
* main - entry point of program
* Return: 0 to exit
*/

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long longInt;
	long long longlongInt;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongInt));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	return (0);
}
