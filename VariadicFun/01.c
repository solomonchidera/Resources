#include "main.h"

int add(int arg, ...)
{
	va_list list;

	if (sum == 0)
		return (0);

	va_start(list, args);
/*All the coding will be inside this place*/

	int i, sum = 0;

	for (i = 0; i < arg; i++)
	{
		sum = va_arg(list, int);
	}

	va_end(list);

	return (sum);
}

int main(void)
{
	printf("Addition 1 = %d\n", add(2, 4, 7));
	return (0);
}
