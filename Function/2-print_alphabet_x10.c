#include "main.h"

void print_alphabet_x10(void)
{
	int line;
	char atoz;

	for (line = 1; line <= 10; line++)
	{
		atoz = 'a';

		for (; atoz <= 'z'; atoz++)
		{
			_putchar(atoz);
		}

		_putchar(10);
	}
}
