#include "main.h"

int main(void)
{
	int var = 58;

	int *p;

	p = &var;

	printf("The address of var is %p\n", &var);
	printf("The value of '*p' is %p\n", p);

	return (0);
}
