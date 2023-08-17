#include <stdio.h>

int min(int int);
int main(void)
{
	int fnum, snum, ret;

	fnum = 23;
	snum = 43;

	ret = min(fnum, snum);
	printf("The minimum value between %d and %d is %d\n", fnum, snum, ret);

	return (0);
}

int min(int one, two)
{
	int result;

	if (one < two)
	{
		result = one;
	}
	else
		result = two;

	return (result);
}
