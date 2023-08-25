#include "main.h"

int main(void)
{
	char a[7] = "school";
	printf("%c", *(a + 6));
	printf("%s\n", a);
	printf("Value of the last character of a is: %d\n", a[9]);
	return (0);
}
