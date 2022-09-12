#include <stdio.h>

/**
 * main - this program prints single digit base numbers
 *
 * Description: Main function prints single digit
 * base numbers.
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
