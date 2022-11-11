#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    int record;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%   d, %i]\n", len, len);
    /**printf("Return: %d\n", record);*/
    record = printf("Length:[%d, %i]\n", len2, len2);
    printf("Return: %d\n", record);
    record = _printf("Negative:[%d]\n", -762534);
    printf("Return: %d\n", record);
    record = printf("Negative:[%d]\n", -762534);
    printf("Return: %d\n", record);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    record = _printf("Character:[%c]\n", 'H');
    printf("Return: %d\n", record);
    record = printf("Character:[%c]\n", 'H');
    printf("Return: %d\n", record);
    record = _printf("String:[%s]\n", NULL);
    printf("Return: %d\n", record);
    record = printf("String:[%s]\n", NULL);
    printf("Return: %d\n", record);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

   
    return (0);
}
