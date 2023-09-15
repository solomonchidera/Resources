#include "main.h"

int average(int n, ...)
{
	int i;
	int total;
	va_list ap;/*Argument pointer*/

	total = 0, i = 0;

	va_start(ap, n);/*Tells the pointer to point towards the next argument which is the ...*/

	while (i < n)
	{
		total += va_arg(ap, int);
		i++;
	}

	return (float)total / n;

}

int main(void)
{
	float aver;

	aver = average(3, 6, 4, 7);


	printf("The average number of 4 persons are: %f", average);

	
	return (0);
}
