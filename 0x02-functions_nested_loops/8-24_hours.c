#include "main.h"
/**
 *jack_bauer - function that prints evey minute
 *of the day of Jack Bauer, starting from 00:00
 *to 23:59, min loop counts minutes, hour loop
 *counts hours and resets minutes.
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_rem;
	int mins_rem;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	mins_rem = minutes % 10;
	hours_rem = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_rem + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(mins_rem + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
}
}
