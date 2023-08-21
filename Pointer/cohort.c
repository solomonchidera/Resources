#include "stdio.h"

int main(void)
{
	int cohort = 1;

	for (; cohort < 11; cohort++)
	{
		printf("%d\n", cohort);
		printf("The last two digits is his cohort", cohort);
	}
	putchar(10);
	return (0);
}
