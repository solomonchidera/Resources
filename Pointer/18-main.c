#include "main.h"

int main(void)
{
	char b[98];

	printf("b: %p\n", b);
	printf("sizeof of b is %lu\n", sizeof(b));
	printf("&b %p\n", &b);
	return (0);
}
