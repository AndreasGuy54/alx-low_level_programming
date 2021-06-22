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

#endif
