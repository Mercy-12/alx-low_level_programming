#include "main.h"
/**
 * _strncpy - Copies string
 * @dest: pointer to char contents are copied to
 * @src: pointer to char content are copied from
 * @n: number of character to copy
 * Return : string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
			i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
