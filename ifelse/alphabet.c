#include "main.h"

int main(void)
{
	char a;
	a = 'a';

	while (a < 'z')
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
