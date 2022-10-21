#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to print
 *
 * Return: Nothing!
 */
void print_number(int n)
{
	unsigned int d = n;

	if (n < 0)
	{
	_putchar('_');
	d = -d;
	}
	if ((d / 10) > 0)
	{
	print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}
