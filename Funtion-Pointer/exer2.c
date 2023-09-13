#include "main.h"

void printName(char *name)
{
	printf("Hello %s\n", name);
}

int main(void)
{
	void (*ptr)(char *);
	ptr = printName;
	ptr("Foo");

}
