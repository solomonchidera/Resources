#include "main.h"
#include <string.h>

/* 
 * C Program to implement a FizzBuzz using String
 */

int main(void)
{
	char str[10] = "";
	int num;
	num = 1;

	for (; num <= 25; num++)
	{
		if (num % 3 == 0)
			strcat(str, "Fizz");
		if (num % 5 == 0)
			strcat(str, "Buzz");
		if (num % 3 == 0 && num % 5 == 0)
			strcat(str, "FizzBuzz");
		if (strlen(str) == 0)
			printf("%d ", num);
		else
			printf("%s ", str);

	}
	printf("\n");

	return (0);

}
