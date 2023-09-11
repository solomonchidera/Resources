#include "main.h"

#define PRODUCT(X, Y) ((X) * (Y))

int main(void)
{
	int a, b;
	a = 3, b = 5;
	printf("The product of %d and %d is: %d\n", a, b, PRODUCT(a, b));
	return (0);
}
