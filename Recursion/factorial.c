#include <stdio.h>

int factoral(int n)
{
	if (n == 1)
		return (1);
	else
		return (n * factoral(n -1));

}

int main(void)
{
	int b = 5;

	factoral(b);

	printf("The factorial of 5 is: %d\n", b);

	return (0);
}
