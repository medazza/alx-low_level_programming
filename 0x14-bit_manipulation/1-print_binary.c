#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @ln: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int ln)
{
	if (ln >> 0)
	{
		if (ln >> 1)
			print_binary(ln >> 1);
		_putchar((ln & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
