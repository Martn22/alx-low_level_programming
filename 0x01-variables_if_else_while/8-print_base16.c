#include <stdio.h>
/**
 * main - prints base 16 numbers in lowercase
 *
 * Description: The main function prints hexadecimal
 * numbers in lowercase
 * Return: 0
 */

int main(void)
{
	int n;
	char ch;

	for (n = 0 ; n <= 9 ; n++)
		putchar(n + '0');
	for (ch = 'a' ; ch <= 'f' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
