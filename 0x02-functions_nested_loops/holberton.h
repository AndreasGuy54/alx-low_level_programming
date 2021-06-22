#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: 0 to exit.
*/
int _putchar(char c);

/**
* print_alphabet - print lowercase alphabet
*/
void print_alphabet(void);

/**
* print_alphabet_x10 - print all alphabets ten times
*/
void print_alphabet_x10(void);

/**
* _islower - checks for lowercase character
* @c: the character to check
* Return: int
*/
int _islower(int c);

/**
* _isalpha - check for alphabet
* @c: character to check
* Return: 1 if lower or uppercase, 0 if not alphabet character
*/
int _isalpha(int c);

/**
* print_sign - print sign of number
* @n: number to check
* Return: 1 if greater than 0, 0 if 0, -1 if less than 0
*/
int print_sign(int n);

/**
* _abs - absolute value of integer
* @int: integer
* Return: absolute value
*/
int _abs(int);

/**
* print_last_digit - print last digit of number
* @int: integer
* Return: last digit of number
*/
int print_last_digit(int);

/**
* jack_bauer - print every minute of a day
* Description: 00:00 to 23:59
*/
void jack_bauer(void);

/**
* times_table - print multiplication table up to 9
*/
void times_table(void);

/**
* add - add two integers
* @a: first integer
* @b: second integer
* Return: sum
*/
int add(int a, int b);

#endif
