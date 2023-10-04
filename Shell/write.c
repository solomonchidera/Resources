#include "main.h"

int print(const char *string)
{
	return(write(1, &string, strlen(string)));
}
