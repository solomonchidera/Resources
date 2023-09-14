#include "main.h"

int add(int arg, ...)
{
	int sum, i;
	sum = 0;

	va_list list;

	va_start(list, arg);

	if (sum == 0)
		return (0);

/*All the coding will be inside this place*/

	for (i = 0; i < arg; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}

int main(void)
{
	printf("Addition 1 = %d\n", add(2, 4, 7));
	return (0);
}
