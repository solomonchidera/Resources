#include "main.h"

int factorial(int n)
{
	if (n == 0)
		return (1);

	for (n = 1; n < 5; ++n)
	{
		n = n * (n - 1);
	}
	return (n);
}

int main(void)
{
	int i, fac;
	i = 5;	
	fac = factorial(i);
	printf("Th factorial of %d is %d\n", i, fac);
	return (0);
}
