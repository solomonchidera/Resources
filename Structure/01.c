#include "main.h"

int main(void)
{
	struct person solomon;

	solomon.name = "Solomon";
	solomon.email = "solo@me.com";
	solomon.pet = "lily";
	solomon.salary = 0.00;
	solomon.fun-fact = "Love's coding in tears";

	printf("My name is %s and his email address is %s\n", solomon.name, solomon.email);
	printf("His pet name is %s and can you imagine that his salary is: %s\n", solomon.pet, solomon.salary);
	printf("His fun fact %s\n", solomon.fun-fact);

	return (0);
}
