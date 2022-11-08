#include "str_func.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to first string
 * @accept: pointer to second string
 * Return: always count (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0';)
		{
			if (s[i] == accept[j])
			{
				count++;
				j++;
				break;
			}
			else
			{
				j++;
			}
		}
		if (accept[j] == '\0')
			return (count);
	}
	return (count);
}
