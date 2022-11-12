#include "main.h"

int p_default(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}
