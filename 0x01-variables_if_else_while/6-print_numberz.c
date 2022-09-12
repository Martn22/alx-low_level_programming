#include <stdio.h>
/**
 * main function prints single digit base 10 numbers
 *
 * description: the main function prints single digit
 * base 10 numbers
 * Return: 0(always)
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
