#include "main.h"

struct node
{
	int data;
	struct node *next;
};

int main(void)
{
	struct node *Head;
	struct node *Snode;

	Head = malloc(sizeof(struct node));

	Head->data = 40;
	Head->next = NULL;

	printf("Head->data = %d\n", Head->data);
	Snode = (struct node *)malloc(sizeof(struct node));
	Snode->data = 50;
	Head->next = Snode;
	printf("Second node is %d\n", Snode->data);
	return (0);
}
