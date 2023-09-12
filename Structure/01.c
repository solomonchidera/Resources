#include "main.h"

int main(void)
{
	struct Person solomon;
	struct Person *ptr;

	solomon.name = "Solomon";
	solomon.email = "solo@me.com";
	solomon.pet = "lily";
	solomon.salary = 0.00;
	solomon.funfact = "Love's coding in tears";

	printf("My name is %s and his email address is %s\n", solomon.name, solomon.email);
	printf("His pet name is %s and can you imagine that his salary is: %f\n", solomon.pet, solomon.salary);
	printf("His fun fact %s\n", solomon.funfact);

	ptr = &solomon;
	(*ptr).name = "Med-Es";
	ptr->email = "voo@gmail.com";
	printf("The new email is: %s", ptr->email);
	return (0);
}
