#include "main.h"

void modify_param(int m)
{
	m = 200;
	printf("this is the value of m: %d\n", m);

}

int main(void)
{
	int i = 70;
	modify_param(i);
	printf("this is the value of i: %d\n", i);
	return (0);
}
