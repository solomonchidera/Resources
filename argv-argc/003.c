#include "main.h"

int main(int argc, char *argv[])
{
	int sum;
	int count;

	printf("This program was called with \"%s\".\n", argv[0]);
	

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
			sum += atoi(argv[i]);
		}
		printf("The sum of those argument are: %d\n", argv[i]);
	}
	else 
	{
		printf("The command had no other arguments.\n");

	}
	return (0);
}
