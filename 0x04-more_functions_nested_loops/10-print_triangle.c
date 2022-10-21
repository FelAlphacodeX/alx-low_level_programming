#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of triangle
 */
void print_triangle(int n)
{
	int h, trian;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (trian = n - h; trian > 0; trian--)
				_putchar(' ');

			for (trian = 0; trian < h; train++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
