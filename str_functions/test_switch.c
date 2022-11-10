#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_all - Prints anything
 * @format: list of data types passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int j;
	size_t i;
	char *s;
	va_list args;

	va_start(args, format);
	i = 0;
	if (format != NULL)
	{
	while (format[i])
	{
		j = 0;
		switch (format[i])
		{
			case 'i':
			printf("%i", va_arg(args, int));
			break;
			case 'c':
			printf("%c", va_arg(args, int));
			break;
			case 's':
			s = va_arg(args, char*);
			while (s == NULL)
			{s = "(nil)"; }
			printf("%s", s);
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			break;
			default:
			j++;
			break;
		}
		i++;
		if (j != 1 && i < strlen(format))
			printf(", ");
	}
	}
	printf("\n");
	va_end(args);
}
