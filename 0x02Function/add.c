#include <stdio.h>

int add(int, int);
int main(void)
{
	int a, b, sum;
	a = 5; b = 10;
	sum = add(a, b);

	return (0);
}

int add(int one, int two)
{
	int result;
	result = one + two;
	return (result);
}
