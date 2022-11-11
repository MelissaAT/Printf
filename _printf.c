#include "main.h"
/**
 * _printf - prints formated output
 * @format: fixed parameter
 * @ap: argument pointer
 * Return: number of chracter printed
 */
int _printf(const char *format,...)
{
	int i = 0, count = 0, wht_spc = 0;
	va_list ap;

	va_start(ap, format);
	if (format != NULL)
	{
		while (format[i])
		{
			/**Check for format specifier*/
			if (format[i] == '%')
			{
				i++;
				/**Check for whitespace*/
				while (format[i] == ' ')
				{
					i++;
					wht_spc++;
				}
				/**Format specifier accepted*/
				switch (format[i])
				{
				case 'c':
				count += p_char(va_arg(ap, int));
				break;
				case 's':
				count += p_str(va_arg(ap, char *));
				break;
				case '%':
				write(1, &format[i], 1);
				count++;
				break;
				case 'i':
				count += p_int(va_arg(ap, int));
				break;
				case 'd':
				count += p_int(va_arg(ap, int));
				break;
				default:
				count = count + 2;
				write(1, "%", 1);
				write(1, &format[i], 2);
				i++;
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
