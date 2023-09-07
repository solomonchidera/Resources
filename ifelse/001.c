#include "main.h"

int main(void)
{
	int a, b, c;
	a = 21, b = 10;

	c = a + b;
	printf("a: %d + b: %d = %d\n", a, b, c);

	c = a - b;
	printf("a:%d - b:%d = %d\n", a, b, c);

	c = a * b;
	printf("a:%d * b:%d = %d\n", a, b, c);

	c = a / b;
	printf("a:%d / b:%d = %d\n", a, b, c);

	c = a % b;
	printf("a:%d %% b :%d = %d\n", a, b, c);

	c = a++;
	printf("a++ will give us this output: %d\n", c);

	c = b++;
	printf("b++ will give us this output: %d\n", c);

	return (0);

}
