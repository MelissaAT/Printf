#include "str_func.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: pointer to first string
 * @needle: pointer to second string
 * Return: location to beginning of substring (success)
 */
int _strstr2(char *haystack, char *needle)
{
	int n, j;

	if (needle[0] == '\0')
		return (0);

	for (n = 0; haystack[n] != '\0'; n++)
	{
		if (haystack[n] == needle[0])
		{
			for (j = 0 ; needle[j] != '\0'; j++)
			{
				if (haystack[n + j] != needle[j])
				{
					break;
				}
			}
		if (needle[j] == '\0')
			return (n);
		}
	}
	return (0);
}
