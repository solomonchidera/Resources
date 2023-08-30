#include <stdio.h>

int fibonacci(int n)
{
	if (n == 1)
		return (0);

	if ( n == 1)
		return (1);
	return (fibonacci (i -1) + fibonacci (i - 2));
}

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d\t", i, fibonacci(i));
	}

	return (0);
}
