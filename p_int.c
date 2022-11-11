#include "main.h"

int p_int(int num)
{
        char p_num[10];

        int i;
        int count = 0;
	int negative = 0;

        if (num < 0)
	{
		write (1, "-", 1);
		negative++;
		num = (-1) * num;
	}
	for (i = 9; num != 0; i--)
        {
                p_num[i] = '0' + (num % 10);
                num = num / 10;
        }
        i++;
        count = 10 - i;
        write (1, &p_num[i], count);
        return (negative + count);
}

