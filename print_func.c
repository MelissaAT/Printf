#include <unistd.h>
#include "main.h"
/**
 * p_char - prints character
 * p_str - prints string
 * @c: parameter
 * Return: length of the variables
 */
int p_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int p_str( char *s)
{
	int len;

	len = _strlen(s);
	write(1, s, len);
	return (len);
}
