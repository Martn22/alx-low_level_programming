#include "main.h"
/**
 * print_most_numbers - This function prints numbers
 * between 0 to 9 except 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int a; /*declare integer a*/

	if ((a >= 0 && a <= 9) && (a != 2 && a != 4))
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
