#include "main.h"

int main(void)
{
	int *pointer;

	pointer = (int *)malloc(sizeof(pointer));

	if (pointer == NULL)
	{

		printf("Error in allocting memory\n");
		return (1);
	}

	*pointer = 98;
	printf("*pointer = %d\n", *pointer);

	free(pointer);
	return (0);
}
