#include "main.h"

int print_last_digit(int n)
{
	int a;
	a = n % 10;

	if (a < 0)
	{
		_putchar(-a + 48);
		return(-a);
	}
	else
	{
		_putchar(a + 48);
		return(a);
	}
}
