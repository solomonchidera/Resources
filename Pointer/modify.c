#include "main.h"
/**
 * modify_my_param - this function does not modify m
 * @m: a useless integer
 *
 * Returns: nothing
 */

void modify_my_param(int m)
{
	m = 402;
}

/**
 * main - parameters are passed by value
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 98;
	modify_my_param(n);
	printf("%d is for n", n);
	return (0);
}
