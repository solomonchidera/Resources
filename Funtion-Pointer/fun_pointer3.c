#include "main.h"

void add(int a, int b)
{
	printf("Addition of %d + %d = %d\n", a, b, a+b);
}

void sub(int a, int b)
{
	printf("Substraction of %d - %d  = %d\n", a, b, a_b);
}

void mul(int a, int b)
{
	printf("Multiplication of %d * %d = %d\n", a, b, a*b);
}

int main(void)
{
	void (*ptr[])(int, int) = {add, sub, mul};
	unsigned int ch, int x, y;
	
	printf("choose 0 for add, 1 for sub, 2 for mul\n");
	scanf("%d", ch);

	printf("Choose the number you want to use for your operation\n");
	scanf("%d %d", &x, &y);

	if (ch == 0) return (0);

	(*ptr[ch])(a, b);
	return (0);
		
