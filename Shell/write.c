#include "main.h"
#include <string.h>
/**
 * print - function that was built to be used as string printer
 * Return: coming soon
 */

int print(char *string)
{
	size_t len;
	len = strlen(string);
	return(write(1, &string, len));
}


int main(void)
{
	char test[9] = "Moniaar";

	print(test);
	putchar(10);

	return (0);
}
