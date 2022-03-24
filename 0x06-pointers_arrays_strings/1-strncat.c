#include "main.h"
/**
 * _strncat - concatenate two string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to be appended
 *
 * Return: display concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && n > 0)
	{
		dest[a] = src[b];
		b++;
		n--;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
