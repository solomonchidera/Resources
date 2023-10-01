#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int arr[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		arr[i] = i + 2;
	}


	for (i = 0; i < 10; i++)
	{
		printf("index [%d] of arr is %d\n", i, arr[i]);
	}
	printf("\n");
	return (0);
}
