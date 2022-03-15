#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
