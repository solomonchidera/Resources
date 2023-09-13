#include "main.h"

void add(int a, int b)
{
	printf("Addition of %d + %d = %d\n", a, b, a+b);
}

void sub(int a, int b)
{
	printf("Substraction of %d - %d  = %d\n", a, b, a-b);
}

void mul(int a, int b)
{
	printf("Multiplication of %d * %d = %d\n", a, b, a*b);
}

int main(void)
{
	void (*ptr[])(int, int) = {add, sub, mul};
	unsigned int ch;
	int x, y;
	
	printf("choose 0 for add, 1 for sub, 2 for mul\n");
	scanf("%u", &ch);

	printf("Choose the number you want to use for your operation\n");
	scanf("%d %d", &x, &y);

	if (ch == 0)
	{
		(*ptr[0])(x, y);
	}
	else if (ch == 1)
		(*ptr[1])(x, y);
	else if (ch == 2)
		(*ptr[2])(x, y);
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}	
