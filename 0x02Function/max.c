#include <stdio.h>

int max(int one, int two)
{
	int result;

	if (one > two)
	{
		result = one;
	}
	else
		result = two;

	return (result);
}
