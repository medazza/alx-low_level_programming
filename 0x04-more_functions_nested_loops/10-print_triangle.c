#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @s: size of the triangle
 */
void print_triangle(int s)
{
	int i, j;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= s; i++)
		{
			for (j = i; j < s; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
