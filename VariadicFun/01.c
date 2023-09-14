#include "main.h"


int sum(int num, ...)
{
	int i, result;
	va_list args;

	va_start(args, num);

	for (i = 0; i < num; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);

	return (result);
}

int main(void)
{
	int result;

	result = sum(2, 3, 7);
	printf("The result is %d\n", result);
	return (0);
}
