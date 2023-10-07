#include "main.h"
/* 
 * C Program to implement a FizzBuzz using String
 */

int main(void)
{
	char str[9] = "";
	int num;
	i = 1;

	for (; num <= 25; i++)
	{
		if (num % 3 == 0)
			strcat(str, "Fizz");
		else if (num % 5 == 0)
			strcat(str, "Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			strcat(str, "FizzBuzz");
		if (strlen(str) == 0)
			printf("%d ", i);
		else
			printf("%s ");

	}
	printf("\n");

}
