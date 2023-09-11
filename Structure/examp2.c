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
	
	user.name = "Foo Bar";
	user.email = "foo@hbtn.io";
	user.age = 98;
	printf("sizeof User %lu\n", sizeof(struct User));
	printf("sizeof user.name %lu\n", sizeof(user.name));
	return (0);
}
