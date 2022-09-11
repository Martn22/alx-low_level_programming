#include <stdio.h>
/**
 * main - this program prints the alphabet
 * in lowercase and uppercase
 *
 * Description: the main function prints the alphabet
 * and then in lowercase
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
