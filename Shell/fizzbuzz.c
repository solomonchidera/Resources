#include "main.h"

int main(void)
{
	int i;
	i = 1;

	for (; i <= 100; i++)
	{
		if (i / 3 && i / 5)
			printf("FizzBuzz");
		else if (i / 3)
			printf("Fizz");
		else if (i / 5)
			printf("Buzz");
		else
			printf("%d", i);
		printf("\n");
	}
	return (0);
}
