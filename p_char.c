#include "main.h"
/**
 * p_char - prints a char
 * @c: char to print
 * Return: length of char or zero (success)
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
