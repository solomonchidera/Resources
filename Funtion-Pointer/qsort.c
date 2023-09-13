#include "main.h"

int value[] = {40, 10, 200, 90, 20, 25};

int compare(const void *a, const void *b)
{
	return ( *(int*)a - *(int*)b );
}

int main(void)
{
	int n;
	qsort (value, 6, sizeof(int), compare);

	for (n = 0; n < 6; n++)
	{
		printf("%d\n", value[n]);
	}
	return (0);
}
