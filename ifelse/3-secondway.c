#include "main.h"

int main(void)
{
	char a, b;
	a = 'a';
	b = 'A';

	while (a < 'z' && b < 'Z')
	{
		putchar(a);
		putchar(b);
		a++;
		b++;
	}
	putchar(10);
	return (0);
}
