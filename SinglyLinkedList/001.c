#include "main.h"

struct node
{
	int data;
	struct node *next;
};

int main(void)
{
	stuct node *head = NULL;/*pointer to the first node*/
	head = malloc(sizeof(struct node));

	head->data = 100;/*Accessing and initializing the first node*/
	head->link = NULL;/*Setting the pointer to the next node to NULL*/
	
}
