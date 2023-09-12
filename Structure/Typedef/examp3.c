#include "main.h"

typedef struct User
{
	char *name;
	char *email;
	int age;
} user;

int main(void)
{
	struct User user;
	stuct User *ptr;

	ptr = &user;

	(*ptr).name = "Solomon";
	printf("%s\n", name);
	user user2;

	return (0);
