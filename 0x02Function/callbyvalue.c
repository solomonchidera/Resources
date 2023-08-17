#include <stdio.h>

void modifyValue(int a)
{
	a = a * 2;
	printf("Inside Function: a is %d\n", a);
}

int main(void)
{
	int num = 5;
	modifyValue(num);

	printf("Outside Function: num is %d\n");

	return (0);
}
