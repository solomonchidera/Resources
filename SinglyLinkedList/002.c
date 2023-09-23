#include "main.h"

/**
 * Objective: creating a single linked list with multiple nodes
 * FileName: 002.c
 * Lang: C
 * Author: Solomon Chidera.
 */

struct node
{
	int data;
	struct node *next;
};

int main(void)
{
	struct node *head;
	head = (stuct node *)malloc(sizeof(stuct node));
	if (head == NULL)
	{
		printf("Allocation failed\n");
		return (1);
	}

	head->data = 20;
	head->next = node2;

	struct node *node2;
	node2 = malloc(sizeof(struct node));
	if (node2 == NULL)
	{
		printf("Allocation failed\n");
		return (1);
	}
	node2->data = 21;
	node2->next = NULL;

	printf("head->data: %d\n
		node2->data: %d\n", head->data, node2->data);

	return (0);
}
