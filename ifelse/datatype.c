#include <stdio.h>

int main(void)
{
	int score = 100;       // Signed integer
	printf("%d \n", score);
	unsigned int count = 42; // Unsigned integer
	printf("%d \n", count);
	short temperature = -5; // Short integer
	printf("%d\n", temperature);
	long population = 7000000000L; // Long integer
	printf("%ld\n", population);
	long long very_large_number = 987654321012345678LL; // Long long integer
	printf("%lld\n", very_large_number);
	return (0);
}
