#include "main.h"

/**
 * more_numbers - This function prints 10 times the numbers 0 t0 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
				_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
