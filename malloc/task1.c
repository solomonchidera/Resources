#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);

}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *c;
	int *i;
	float *f;
	double *d;

	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	i = malloc_checked(sizeof(int) * 402);
	printf("%p\n", (void *)i);
	f = malloc_checked(sizeof(float) * 100000000);
	printf("%p\n", (void *)f);
	d = malloc_checked(INT_MAX);
	printf("%p\n", (void *)d);
	free(c);
	free(i);
	free(f);
	free(d);
	return (0);
}
