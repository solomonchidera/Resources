#include "main.h"

void m(int n0, int n1, int n2)
{
	int *t;
	int sum;
	t = malloc(sizeof(*t) * 3);

	t[0] = n0;
	t[1] = n1;
	t[2] = n2;
	sum = t[0] + t[1] + t[2];
	printf("%d + %d + %d = %d", t[0], t[1], t[2], sum);

}

int main(void)
{
	m(5, 4, 1);
	return (0);
}
