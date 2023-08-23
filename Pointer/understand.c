#include "main.h"

void trying_tosee(int *a)
{
	*a = 500;
}

int main(void)
{
	int n = 354;
	int *p;
	p = &n;
	trying_tosee(p);
	printf("This is the value of n: %d\n", n);
	return (0);
}
