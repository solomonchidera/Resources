#include "main.h"

int main(void)
{
	double salary[];
	scanf("%d", &salary);
	printf("The first number is %d and the second number is: %d", *salary, *(salary + 1));
	return (0);
}
