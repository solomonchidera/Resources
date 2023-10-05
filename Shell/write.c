#include "main.h"
/**
 * print - function that was built to be used as string printer
 * Return: coming soon
 */
int print(const char *string)
{
	return(write(1, &string, strlen(string)));
}
