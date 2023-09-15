#include "main.h"

int average(int n, ...)
{
	int i;
	int total;

	total = 0, i = 0;
	va_list ap;/*Argument pointer*/

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
	int i;
	i = 0;

	(float)i = 0;

	printf("The average number of 4 persons are: %d", av)

	
	return (0);
}
