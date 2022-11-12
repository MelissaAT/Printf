#include "main.h"
/**
 * p_str - prints string
 * @s: parameter
 * Return: length of string printed
 */
int p_str(char *s)
{
	int len;

	if (s != NULL)
	{
		len = _strlen(s);
		write(1, s, len);
		return (len);
	}
	else if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
		return (0);
}