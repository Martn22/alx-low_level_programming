#include "main.h"
/**
 * print_last_digit - This function prints the last digit of a number
 *
 *@n: number that is in question
 *
 * Return: value of last_digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last digit *= -1;

	_putchar (last_digit + '0');

	return (last_digit);
}
