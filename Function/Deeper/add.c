#include "main.h"


int add(int a, int b)
{
	int result;
	result = a + b;
	return (result);

}


int main(void)
{
	int a, b, sum;
	a = 3, b = 10;
	sum = add(a, b);
	printf("%d + %d = %d\n", a, b, sum);
	return (0);

}
