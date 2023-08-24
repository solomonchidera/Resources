#include "main.h"

int main(void)
{
	int a[5];

	a[0] = 98;
	a[1] = 198;
	a[2] = 298;
	a[3] = 398;
	a[4] = 498;
	a[4] = 765;
	printf("Value of the first index which is a[0] is %d\n", a[0]);
	printf("Value of the second index which is a[1] is %d\n", a[1]);
	printf("Value of the third index which is a[2] is %d\n", a[2]);
	printf("Value of the fourth index which is a[3] is %d\n", a[3]);
	printf("Value of the last index which is a[4] is %d\n", a[4]);
	printf("\n-------------------------------------------------------------\n");
	printf("Address of the first a[0]: [%p]\n", &a[0]);
	printf("Address of the second a[1]: [%p]\n", &a[1]);
	printf("Address of the third a[2]: [%p]\n", &a[2]);
	printf("Address of the fourth a[3]: [%p]\n", &a[3]);
	printf("Address of the fifth a[4]: [%p]\n", &a[4]);

	return (0);
}
