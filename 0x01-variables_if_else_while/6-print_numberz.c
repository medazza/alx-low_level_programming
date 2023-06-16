#include <stdio.h>
/**
 *main - entry function
 *Description: the func print only digits using putchar
 *return: 0 >>>>>>>>>>>> ok
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
