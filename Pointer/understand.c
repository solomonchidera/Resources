#include "main.h"

void trying_tosee(*a)
{
	*a = 500;
}

int main(void)
{
	int n = 354;
	trying_tosee(a);
	printf("This is the value of n: %d\n", n);
	return (0);
}
