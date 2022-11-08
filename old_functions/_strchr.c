#include "str_func.h"
/**
 * _strchr - function that locates a character in a string
 * @s: poiner to string to locate
 * @c: pointer to character to locate
 * Return: pointer to ocurrence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
			return (s + i);
		s++;
		if (*s == c)
			return (s + i);
	}
	return (0);
}
