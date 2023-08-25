#include "main.h"
#include "string.h"

int main(void)
{
	char a[7] = "school";
	printf("%c", *(a + 6));
	printf("%s\n", a);
	printf("Value of the last character of a is: %d\n", a[7]);
	printf("value of \"school\":%p\n", "school");
	printf("Address of a[4]: %p\n", a[4]);
	return (0);
}
