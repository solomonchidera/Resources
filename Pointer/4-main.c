#include "main.h"

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Address of n = %p\n", &n);
	printf("value of our pointer is %p\n", p);

	return (0);
}
