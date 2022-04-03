#include <stdio.h>

/**
 * main - print number of argument passed followed by new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return 0;
}
