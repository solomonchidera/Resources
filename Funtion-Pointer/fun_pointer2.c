#include "main.h"


void num(int x)
{
	printf("Value of num: %d", x);
}

int main(void)
{
	void (*ptrnum)(int) = num;
	ptrnum(910);

	return (0);
}
