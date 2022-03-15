#include "main.h"

/**
 * _isalpha - checks for characters are alpha or not
 * @c: holds the charactor
 * Return: if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
