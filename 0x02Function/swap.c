#include <stdio.h>

void swap(int *one, int *two)
{
	int holder;

	holder = *one;
	
	*one = *two;

	*two = holder;
}
