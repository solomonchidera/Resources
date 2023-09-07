#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr;

	ptr = (int *)malloc(sizeof(int));

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory alloction failed\n");
		return (0);
	}

	*ptr = 42;
	printf("Value of ptr: %d\n", *ptr);

	free(ptr);
	return (0);

}
