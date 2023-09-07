#include "main.h"

int main(void)
{
	int l, u;
	l = 'a', u = 'A';

	while (l < 'z')
	{
		putchar(l);
		l++;
	}

	while (u < 'Z')
	{
		putchar(u);
		u++;
	}
	putchar(10);
}
