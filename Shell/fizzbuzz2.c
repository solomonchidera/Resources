#include "main.h"

/**
 * main - print fizzbuzz challenge
 * FileName: fizzbuzz2.c
 * Challenge complexity: 5
 * Challenge Detail: print fizz on division of 3, buzz on 5 and fizzbuzz on 3 and 5
 */

int main(void)
{
	int i, on3, on5, on3and5;

	i = 1;
	
	for(; i <= 100; i++)
	{
		on3 = i % 3 == 0;
		on5 = i % 5 == 0;
		one3and5 = i % 3 == 0 && i % 5 == 0;

		if (on3and5)
			printf("FizzBuzz ");
		else if (on3)
			printf("Fizz ");
		else if (on5)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
