#include "main.h"

struct User
{
	char *name;
	char *email;
	int age;
};

int main(void)
{
	struct User user;
	struct User *ptr;
	
	ptr = &user;

	(*ptr).name = "Foo Bar";
	ptr->email = "foo@hbtn.io";
	ptr->age = 98;
	printf("sizeof User %lu\n", sizeof(struct User));
	printf("sizeof user.name %lu\n", sizeof(user.name));
	printf("Value of age is: %d\n", ptr->age);
	return (0);
}
