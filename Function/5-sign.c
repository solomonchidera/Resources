#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(45);
	}
	return (0);
}
