#include <stdio.h>

void fun(int a)
{
	if (a == 0)
		return;
	a += 1;
	printf("\n");
	printf("%d", a);
	fun(a);
}

int main(void)
{
	int a = 5;
	fun(a);
}
