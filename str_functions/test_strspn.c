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
    char *f = "hello";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
