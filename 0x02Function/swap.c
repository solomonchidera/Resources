#include <stdio.h>

void swap(int *one, *two)
{
	int holder;

	holder = *one;
	
	*one = *two;

	*two = holder;
}
