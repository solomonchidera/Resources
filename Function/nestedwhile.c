#include <stdio.h>

/**
 * FileName:nestedwhile.c
 * Author: SolomonChidera
 * What does it do: Nested while loop in C.
 */

int main(void)
{
	int a = 0, b, c;

	while (a < 5)
	{
		b = 0;
		while (b < 5)
		{
			c = 0;

			while (c < 5)
			{
				printf(" 5 ");
				c++;
			}
			printf("2 ");
			b++;
			
		}

		putchar(10);
		a = a + 1;
	}
	return(0);
}
