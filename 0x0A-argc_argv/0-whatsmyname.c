#include "main.h"

/**
 * main - This function prints its program name followed
 * by a new line.
 * @argc: The count of the arguments suppplied to the program
 * @argv: array of pointers to string of the arguments
 *
 * Return: returns 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
