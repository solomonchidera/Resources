#include "main.h"

int main(void)
{
	char fullName[25];
	printf("please enter your fullname\n");
	fgets(fullName, 25, stdin);
	printf("My full name is %s", fullName);
	return (0);
}
