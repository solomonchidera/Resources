#include "main.h"

int main(int argc, char *argv[])
{
	int sum;
	int count;

	printf("This program was called with \"%s\".\n", argv[0]);
	printf("argc is total of %d\n", argc);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
			sum += atoi(argv[count]);
		}
		printf("The sum of those argument are: %d\n", sum);
	}
	else 
	{
		printf("The command had no other arguments.\n");

	}
	return (0);
}
