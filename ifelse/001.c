#include "main.h"

int main(void)
{
	int a, b, c;
	a = 10, b = 20;

	c = a + b;
	printf("a: %d + b: %d = %d\n", a, b, c);

	c = a - b;
	printf("a:%d - b:%d = %d\n", a, b, c);

	c = a * b;
	printf("a:%d * b:%d = %d\n", a, b, c);

	c = a / b;
	printf("a:%d / b:%d = %d\n", a, b, c);

	c = a % b;
	printf("a:%d %\ b:%d = %d\n", a, b, c);

	c = a++;
	printf("a++ will give us this output: %d", c);

	c = b++;
	printf("b++ will give us this output: %d", c);

	return (0);

}
