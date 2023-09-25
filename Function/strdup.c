#include "main.h"

int main(void)
{
	char *str = "Solomon";

	char *target = strdup(str);
	printf("%s\n", target);
	return (0);
}
