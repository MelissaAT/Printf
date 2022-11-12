#include "main.h"
/**
 *
 */
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
				while (format[i] == ' ')
				{
					i++;
				}
				switch (format[i])
				{
				case 'c': count += p_char(va_arg(ap, int)); break;
				case 's': count += p_str(va_arg(ap, char *)); break;	
				case '%': write(1, &format[i], 1); count++; break;
				case 'i': case 'd': count += p_int(va_arg(ap, int)); break;
				default: count += p_default(format[i]); i++; break;
				}
			}
			else
			{
				write(1, &format[i], 1); count++;
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
