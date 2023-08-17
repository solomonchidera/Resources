#include <stdio.h>


int max(int one, int two);
int main(void)
{
	int first, second, bigger;

	first = 40;

	second = 20;

	bigger = max(first, second);

	printf("The max value between first and second is %d\n", bigger);

	return (0);
}
