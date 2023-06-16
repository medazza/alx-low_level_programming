#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry function in C-programming
 *Return: 0 ---> success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lst_dgt = n % 10;

	if (lst_dgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dgt);
	}
	else if (lst_dgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_dgt);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dgt);
	}
	return (0);
}
