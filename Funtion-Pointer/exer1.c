#include "main.h"

int add(int a,int b)
{
	return (a + b);
}

int main(void)
{
	int result;
	int (*padd)(int, int) = &add;

	result = padd(2, 5);
	printf("The result is %d\n", result);

	return (0);

}
