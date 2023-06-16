#include <stdio.h>
/**
 * main - entry func
 * Description: prints all possible combinations of single-digit numbers.
 * Return: 0 >>> success
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
