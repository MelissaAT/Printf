#include "main.h"

int _printf(const char *format,...)
{
	int i = 0, count = 0;
	va_list ap;

	va_start(ap, format);
	if (format != NULL)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				i++;

				switch (format[i])
				{
				case 'c':
				count += p_char(va_arg(ap, int));
				/*function to print character*/
				break;
				case 's':
				count += p_str(va_arg(ap, char *));
				/*function to print string*/
				break;	
				case '%':
				write(1, &format[i], 1);
				count++;
				/*function to print % */
				break;
				default:
				count = count + 2;
				write(1, "%", 1);
				write(1, &format[i], 2);
				i++;
				/* responde que si despues de % no hay format specifier*/
				break;
				}
			}
			else
			{
				write(1, &format[i], 1);
				count++;
			}
			i++;
		}
		va_end(ap);
		return (count);
	}
	else
	va_end(ap);
	return (-1);
}
