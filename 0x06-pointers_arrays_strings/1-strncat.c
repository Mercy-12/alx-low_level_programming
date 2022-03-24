#include "main.h"
/**
 * *_strncat - concatenate two string
 * @dest - destination string
 * @src - source string
 * Return : dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0,b = 0;
	while (dest[a]!= '\0')
		a++;
	while (src[b]!= '\0' && n > 0)
	{
		dest[a] = src[b];
		b++;
		n--;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
