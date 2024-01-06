#include "main.h"

int main(void)
{
	int var = 58;

	int *p;

	p = &var;
	*p = 159;

	printf("The address of var is %p\n", &var);
	printf("The value of '*p' is %p\n", p);
	printf("I just remembered my old laptop and am crying %p\n", *p);

	return (0);
}
