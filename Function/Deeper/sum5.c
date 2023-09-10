#include <stdio.h>

void sum()
{
	int a, b, sum = 0;
	printf("Enter two integer to be calculated(sum)\n");
	scanf("%d %d", &a, &b);

	sum = a + b;
	printf("The sum of %d and %d = %d\n", a, b, sum);
}

int main(void)
{
	sum();
	sum();
	sum();

	return (0);
}
