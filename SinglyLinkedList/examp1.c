#include "main.h"

struct Node
{
	int data;
	struct Node* next;
};

struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	if (newNode == NULL)
	{
		printf("Failure\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = next;
	return (newNode);
}

void insertAtEnd(struct Node** head, int data)
{
	struct Node* newNode = createNode(data);
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		struct Node* current = *head;

	}
}
