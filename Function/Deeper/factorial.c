#include "main.h"

int factorial(int n)
{
	n = n * (n - 1);
	return (n);
}

int main(void)
{
	int i;
	printf("Choose a number that you want to factorize ");
	scanf("%d\n", &i);
	factorial(i);
	printf("Th factorial of %d is %d\n", i, factorial(i));
	return (0);
}
