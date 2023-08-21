#include "stdio.h"

int main(void)
{
	int cohort = 1;

	for (; cohort < 11; cohort++)
	{
		printf("%d\n", cohort);
	}
	putchar(10);
	printf("The last two digits is his cohort\n");
	return (0);
}
