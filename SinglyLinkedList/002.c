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
	struct node *node2;
	struct node *node3;
	head = (struct node *)malloc(sizeof(struct node));
	if (head == NULL)
	{
		printf("Allocation failed\n");
		return (1);
	}

	head->data = 20;
	head->next = NULL;

	node2 = malloc(sizeof(struct node));
	if (node2 == NULL)
	{
		printf("Allocation failed\n");
		return (1);
	}
	node2->data = 21;
	node2->next = NULL;
	head->next = node2;

	/*Adding the third node to the list (method 1)*/

	/* node3 = malloc(sizeof(struct node));
	if (node3 == NULL)
	{
		printf("Not enough memory to allocate\n");
		exit(1);
	}
	node3->data = 22;
	node3->next = NULL;
	node2->next = node3;*/

	/* Adding the third node to the list (method 2) using our second node!!! */
	
	node2 = malloc(sizeof(struct node));
	if (node2 == NULL)
	{
		printf("Allocation failed\n");
		exit(1);
	}

	node2->data = 23;
	node2->next = NULL;
	/*Linking the second node to the new(third) node*/
	head->next->next = node2;

	printf("head->data: %d\n"
		"node2->data: %d\n"
		"node3->data: %d\n", head->data, node2->data, node2->data);

	return (0);
}
