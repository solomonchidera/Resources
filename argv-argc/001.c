#include "main.h"

int main(int argc, char* argv[])
{
	int i;

	printf("Number of argument: %d\n", argc);

	for (i = 0; i < argc; ++i)
	{
		printf("Argument %d: %s", i, argv[i]);
	}

	return (0);
}
