#include "main.h"

/**
 * main - prints all arguments including first argument
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
