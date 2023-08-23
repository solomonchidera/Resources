#include "main.h"

int main(void)
{
	int n;
	int *p;

	char c;
	char *pp;

	c = 'H';
	pp = &c;/*pp is holding the address of c*/
	n = 98;
	p = &n;/*p is now holding the address of n*/

	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Address of c: %p\n", &c);
	printf("Value of pp: %p\n", pp);
	printf("-------------------------\n");
	printf("Value of n is %d\n", n);
	printf("Adress of n is: %p\n", &n);
	printf("Value of p is: %p\n", p);

	/*Dereferencing*/
	*p = 402;
	*pp = 'o';

	printf("Value of n is: %d\n", n);
	printf("Value of *pp: %d\n", *pp);
	printf("Value of c is: %d ('%c') \n", c, c);
	printf("Value of *pp is %d ('%c')\n", *pp, *pp);
	return (0);
}
