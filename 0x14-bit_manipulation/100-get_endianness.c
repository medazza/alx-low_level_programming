#include "main.h"

/**
 * get_endianness - checks the endianness of the system.
 * Return: 0 for big endian, 1 for small.
 */

int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
