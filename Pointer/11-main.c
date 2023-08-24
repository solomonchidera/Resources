#include "main.h"

int main(void)
{
	int a[5];

	*a = 98;/*or you can say *(a + 0) since *a refers to the first element*/
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = 498;
	printf("Value of a[0]: %d\n", *a);
	printf("value of a[1]: %d\n", *(a + 1));
	printf("Value of a[4]: %d\n", a[4]);
	printf("Value of a[4]: %d\n", *(a + 4));
	printf("Value of a[5]: %d\n", *(a + 2));
	printf("Value of a[3]: %d\n", *(a + 3));
	printf("-----------------------------\n");
	printf("Value of 'a' (also address of a[0]): %p\n", a);
	printf("Address of 'a[1]': %p", (a + 1));
	printf("Address of 'a[1]': %p", &a[1]);
	printf("Address of 'a[1]': %p", &(*(a + 1)));

	return (0);

}
