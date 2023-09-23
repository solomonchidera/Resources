#include "main.h"

void print_data(struct node *head)
{
	struct node *ptr; /*Creating a pointer to iterate the whole list*/

	if (head == NULL)
		printf("Linked list is empty\n");
	ptr = NULL;

	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
}
