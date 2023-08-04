#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @ln: pointer of an unsigned long int.
 * @indx: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *ln, unsigned int indx)
{
	unsigned int m;

	if (indx > 63)
		return (-1);

	m = 1 << indx;
	*ln = (*ln | m);

	return (1);
}
