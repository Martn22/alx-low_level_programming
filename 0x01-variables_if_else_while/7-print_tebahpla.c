#include <stdio.h>
/**
 * main - prints lowercase alphabes in reverse
 *
 * Description: The main function prints the lowercase
 * alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
