#include "main.h"

int main(int argc, char **argv)
{
	while (argc --)
	{
		printf("%d %s\n", argc, *argv++);
	}
	exit (EXIT_SUCCESS);
}
