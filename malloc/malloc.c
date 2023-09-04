#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i, *ptr;

	printf("Enter the number of values\n");
	scanf("%d", &n);

	ptr = (int *)malloc(n * sizeof(int));

	printf("Enter values\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}

	printf("The entered values are\n");

	for (i = 0; i < n; i++)
	{
		printf("%d", *(ptr + i));
	}
	free(ptr);
}
