#include "main.h"

int strlen(char *str)
{
	int i, size;

	size = 0;

	for (i = 0; str[i] < '\0'; i++)
	{
		size++;
	}
	return (size);
}

int main(void)
{
	char *string = "ALX SCHOOL";
	return (0);
}
