#include "str_func.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world %d and again";
    char *f = "%d";
    char *t;
    int place;
    int place_d;

    t = _strstr(s, f);
    place = _strstr2(s, f);
    place_d = place + 1;
    printf("%s\n", t);
    printf("%c\n", s[place]);
    printf("%c\n", s[place_d]);
    return (0);
}
