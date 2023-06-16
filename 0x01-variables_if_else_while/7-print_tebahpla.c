#include <stdio.h>
/**
 *main - entry function
 *Description: prints the lowercase alphabet in reverse
 *Return: 0 >>>>>>>>>>>> success
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
