#include "str_func.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world %d";
    char *f = "%d";
    char *t;
    int position = 0;

    t = _strstr(s, f);
    position = _strstr2(s, f);
    printf("%s\n", t);
    printf("%s\n", s + position);
    return (0);
}
