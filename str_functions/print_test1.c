#include <unistd.h>
#include "str_func.h"

int main(void)
{
        _printf("hello");
        return (0);
}

int print_str(const char *format)
{
        int len = _strlen(format);

        write(1, format, len);
	_putchar('\n');
        return (len);
}
