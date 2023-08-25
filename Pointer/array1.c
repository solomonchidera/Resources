#include "main.h"

int main(void)
{
	double salary[5];
	scanf("%lf %lf", salary, salary[1]);
	printf("The first number is %lf\nAnd the second number is: %lf\n", *salary, *(salary + 1));
	return (0);
}
