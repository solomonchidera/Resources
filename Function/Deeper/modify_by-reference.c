#include "main.h"

void reference(int *x)
{
	*x += 10;
}

int main(void)
{
	int num;
	num = 10;
	reference(&num);
	printf("%d\n", num);
	return (0);
}
