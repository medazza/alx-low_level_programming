#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to anoter
 * @p: first number
 * @q: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int p, unsigned long int q)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int execlusive = p ^ q;

	for (j = 63; j >= 0; j--)
	{
		current = execlusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
