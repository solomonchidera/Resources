#include "main.h"

struct node
{
	int data;
	struct node *next;
};

int main(void)
{
	struct node *Head;

	Head = malloc(sizeof(struct node));

	Head->data = 40;
	Head->next = NULL;

	printf("Head->data = %d\n", Head->data);
	return (0);
}
