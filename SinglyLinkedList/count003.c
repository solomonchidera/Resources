#include "main.h"

/**
 * Objective: counting the node in a list.
 * FileName: count003.c
 * Lang: C
 * Author: SolomonChidera
 */

void count_no_nodes(struct node *head)
{
	int count;
	struct node *ptr;
	count = 0;
	ptr = NULL;

	if (head == NULL)
	{
		printf("List is empty\n");
		exit(1);
	}

	ptr = head;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	printf("%d\n", count);
}
