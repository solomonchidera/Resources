#include "main.h"

typedef struct node *nodePtr;

struct node
{
	int value;
	nodePtr next;
}

typedef struct node node;

int main(int argc, const char * argv[])
{
	UNUSED (argc);
	UNUSED (argv);

	printf("Hello World!\n");
	return (0);
}
