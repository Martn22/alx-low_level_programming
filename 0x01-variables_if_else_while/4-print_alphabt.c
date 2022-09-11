#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 * Description:The main function prints alphabet
 * in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
