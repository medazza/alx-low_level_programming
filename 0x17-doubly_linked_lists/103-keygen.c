#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints pwords for the crackme5.
 * @argc: Number of arguments supplied to the program.
 * @argv: Array of pointers to arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), ind, temp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	temp = (len ^ 59) & 63;
	password[0] = codex[temp];
	temp = 0;
	for (ind = 0; ind < len; ind++)
		temp += argv[1][ind];
	password[1] = codex[(temp ^ 79) & 63];
	temp = 1;
	for (ind = 0; ind < len; ind++)
		temp *= argv[1][ind];
	password[2] = codex[(temp ^ 85) & 63];
	temp = 0;
	for (ind = 0; ind < len; ind++)
	{
		if (argv[1][ind] > temp)
			temp = argv[1][ind];
	}
	srand(temp ^ 14);
	password[3] = codex[rand() & 63];
	temp = 0;
	for (ind = 0; ind < len; ind++)
		temp += (argv[1][ind] * argv[1][ind]);
	password[4] = codex[(temp ^ 239) & 63];
	for (ind = 0; ind < argv[1][0]; ind++)
		temp = rand();
	password[5] = codex[(temp ^ 229) & 63];
	password[6] = '\0';
	printf("%s", password);
	return (0);
}
