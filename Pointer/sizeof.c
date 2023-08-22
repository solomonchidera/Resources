#include <stdio.h>

int main(void)
{
	int n;

	printf("Size of char on my computer is %lu bytes \n", sizeof(char));
	printf("size of int on my computer is %lu bytes \n", sizeof(int));
	printf("size of float on my computer is %lu bytes \n", sizeof(float));
	printf("size of double on my computer is %lu bytes \n", sizeof(double));
	printf("size of my variable 'n' is %lu bytes \n", sizeof(n));

	return (0);
}
