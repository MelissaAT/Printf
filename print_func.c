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
	if (c != '\0')
	{
		write(1, &c, 1);
		return (1);
	}
	else
		return (0);
}

int p_str( char *s)
{
	int len;

	if (s != NULL)
	{
		len = _strlen(s);
		write(1, s, len);
		return (len);
	}
	else
		return (0);
}
int p_int(void)
{
