#include "main.h"
/**
 * p_int - prints a integer
 * @num: integer to print
 * Return: length of int printed (success)
 */
int p_int(int num)
{
	char p_num[10];
	int i;
	int count = 0;
	int negative = 0;
/*Check if num is negative*/
	if (num < 0)
	{
		write (1, "-", 1);
		negative++;
		num = (-1) * num;
	}
	/*Asign last integer of num to p_num*/
	for (i = 9; num != 0; i--)
	{
		p_num[i] = '0' + (num % 10);
		num = num / 10;
	}
	/*Print num and return length*/
		i++;
		count = 10 - i;
		write (1, &p_num[i], count);
		return (negative + count);
}