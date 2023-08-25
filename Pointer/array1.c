#include "main.h"

int main(void)
{
	double salary[5];
	scanf("%lf", &salary);
	printf("The first number is %lf and the second number is: %lf", *salary, *(salary + 1));
	return (0);
}
