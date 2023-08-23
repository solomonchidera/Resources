#include "main.h"

int main(void)
{
	int n;
	int *p;

	n = 98;
	

	p = &n;

	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);

	printf("\n---------------------------\n");

	printf("The value of *p is: %p\n", p);

	*p = 402;

	printf("Value of 'n': %d\n", n);
	return (0);
}
