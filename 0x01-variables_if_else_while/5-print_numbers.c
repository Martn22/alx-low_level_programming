#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * main function prints single digit base 10 numbers
 * including 0
 * Return: 0(always)
 */
int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
