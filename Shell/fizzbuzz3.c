#include "main.h"
#include <string.h>

/* 
 * C Program to implement a FizzBuzz using String
 */

int main(void)
{
	char str[12] = "";
	int num;
	num = 1;

	for (; num <= 25; num++)
	{
		strcpy(str, "");

		if (num % 3 == 0)
			strcat(str, "Fizz");
		if (num % 5 == 0)
			strcat(str, "Buzz");
		if (strlen(str) == 0)
			printf("%d ", num);
		else
			printf("%s ", str);

	}
	printf("\n");

	return (0);

}
