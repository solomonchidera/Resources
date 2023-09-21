#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
typedef struct node *nodePtr;

struct node
{
	int value;
	nodePtr next;
}

typedef struct node node;
#endif
