#include <stdio.h>

/**
 * FileName:nestedwhile.c
 * Author: SolomonChidera
 * What does it do: Nested while loop in C.
 */

int main(void)
{
	int a = 0, b;

	while (a < 5)
	{
		while (b < 3)
		{
			printf("2 ");
			b++;
		}

		putchar(10);
		a++;
	}
}
