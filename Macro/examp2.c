#include "main.h"
#define SQUARE(x) ((x) * (x))

int main(void)
{
	int num, result;
	num = 5;
	result = SQUARE(num);
	printf("The square of %d is %d\n", num, result);
	return (0);
}
