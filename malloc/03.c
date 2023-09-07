#include "main.h"

int main(void)
{
	int i;
	int *array;
	int size;

	printf("Enter number of the array: ");
	scanf("%d", &size);
	
	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
	{
		puts("Error");
		return (1);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = i * 2;
	}

	for (i = 0; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return (0);
}
