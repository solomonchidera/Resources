#include <stdio.h>


int main(void)
{
	int fi, se;

	printf("Insert a number for the first variable :)\n");
	scanf("%d", &fi);

	printf("Insert a number for the second variable :)\n");
	scanf("%d", &se);

	printf("fi                       se\n
		-----------------------------\n");
	printf("This are the numbers you inserted\n
		%d                        %d\n", fi, se);
	swap(fi, se);
	printf("After swapping the two values with the swap\n
		------------------------------------------\n
		%d                              %d\n", fi, se);

	return (0);
}
