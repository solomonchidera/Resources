#include "main.h"

void modifyX(int x)
{
	x = x += 10;
}

int main(void)
{
	int num;
	num = 5;
	modifyX(num);
	printf("%d\n", num);
	return (0);
}
