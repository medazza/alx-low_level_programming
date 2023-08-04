#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @bi: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *bi)
{
	unsigned int uint;
	int len, base_two;

	if (!bi)
		return (0);

	uint = 0;

	for (len = 0; bi[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (bi[len] != '0' && bi[len] != '1')
		{
			return (0);
		}

		if (bi[len] & 1)
		{
			uint += base_two;
		}
	}

	return (uint);
}
