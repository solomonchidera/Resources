#include "main.h"

int main(void)
{
	int age;

	printf("Please enter your age :)\n");
	scanf("%d", &age);
	printf("Thanks for giving your age, do hold on while we review your age\n");

	if (age < 25)
		printf("You are still a young person\n");
	else if (age > 25)
		printf("Haha old man you are :)\n");
	return (0);
}
