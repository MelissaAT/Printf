#include "main.h"

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
