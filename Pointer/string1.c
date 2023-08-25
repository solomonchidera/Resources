#include "main.h"

int main(void)
{
	char name[10];
	int age;

	printf("please enter your name and yourage ");
	scanf("%s %d", name, &age);
	printf("Your name is %s and your age is %d", name, age);
	return (0);
}
