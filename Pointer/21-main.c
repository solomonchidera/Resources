#include "main.h"

int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	printf("*a: [%d]\n", *a);
	*(a + 1) = 198;
	printf("*(a + 1) [%d]\n", *(a + 1));
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	p = a + 1;
	printf("p = a + 1: %d\n", a + 1);
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;
	return (0);
}
