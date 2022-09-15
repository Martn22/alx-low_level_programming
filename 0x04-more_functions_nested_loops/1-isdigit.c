#include "main.h"
/**
 * _isdigit - this function checks for a digit
 * @c: the number being checked as argument
 *
 * Return: 1 if a digit,
 * 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}