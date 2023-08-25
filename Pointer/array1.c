#include "main.h"

int main(void)
{
	double salary[];
	scanf("%d", &salary);
	printf("The first number is %lf and the second number is: %lf", *salary, *(salary + 1));
	return (0);
}
