#include <stdio.h>

int main(void)
{
	int n;

	printf("Size of char on my computer is %lu bytes ", sizeof(char));
	printf("size of int on my computer is %lu bytes", sizeof(int));
	printf("size of float on my computer is %lu bytes", sizeof(float));
	printf("size of double on my computer is %lu bytes", sizeof(double));
	printf("size of my variable 'n' is %lu bytes", sizeof(n));

	return (0);
}
