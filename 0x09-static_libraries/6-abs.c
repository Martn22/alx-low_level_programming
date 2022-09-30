#include "main.h"
/**
 *_abs - this function computes absolute value
 *an integer
 *
 * @c: Is the int that we will use as the
 * argument of the function.
 *
 * Return: 0
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
		return (c);
	else
		return (c * -1);
}
