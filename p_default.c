#include "main.h"
/**
 * p_default - print porcent and pointer to char
 * c: char to print
 * Return: num of char printed (success)
 */
int p_default(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}
