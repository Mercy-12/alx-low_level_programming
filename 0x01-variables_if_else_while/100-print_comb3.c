#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	x = 0;

	while (x < 100)
	{
		y = x % 10;
		z = x / 10;

		if (z < y)
		{
			putchar(z + '0');
			putchar(y + '0');

			if (x < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		x++;
	}
	putchar('\n');

	return (0);
}
