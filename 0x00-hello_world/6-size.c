#include <stdio.h>
/**
 *main - print in screen : sizeof  ...
 *Return: 0 -> success
 */
int main(void)
{
	char c;
	int i;
	long il;
	long long ill;
	float f;

	printf("Size of a char: %d byte(s)", sizeof(c));
	printf("Size of an int: %d byte(s)", sizeof(i));
	printf("Size of a long int: %d byte(s)", sizeof(il));
	printf("Size of a long long int: %d byte(s)", sizeof(ill));
	printf("Size of a float: %d byte(s)", sizeof(f));
	return (0);
}
