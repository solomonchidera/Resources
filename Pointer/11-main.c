#include "main.h"

int main(void)
{
	int a[5];

	*a = 98;/*or you can say *(a + 0) since *a refers to the first element*/
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = 498;
	printf("Value of a[0]: %d", *a);
	printf("value of a[1]: %d", *(a + 1));
	printf("Value of a[4]: %d", a[4]);
	return (0);

}
