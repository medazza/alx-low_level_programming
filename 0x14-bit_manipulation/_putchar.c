#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c STDOUT.
 * @c: The character to print.
 * Return: if success 1.
 * On error, -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
