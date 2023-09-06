#include "main.h"

int main(void)
{
	int i, size;
	i, size = 0;

	int my_arr[10];

	/*setting values to the arrays using loop*/

	for (i = 0; i < 10; i++)
	{
		size++;
	}

	my_arr[3] = 100;

	/* print the number of array elements*/

	printf("array of %d items:\n", size);

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", my_arr[i]);
	}

	printf("\n--------------------------------\n")

	for (i = 0; i < my_arr[i]; i++)
	{
		printf("%d\n", my_arr[i]);
	}

	return (0);
}
