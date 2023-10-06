#include "main.h"
/**
 * print - function that was built to be used as string printer
 * Return: coming soon
 */

int print(const char *string)
{
	return(write(1, &string, strlen(string)));
}


int main(void)
{
	char test[9] = "Moniaar";

	print(test);
	putchar(10);

	return (0);
}
