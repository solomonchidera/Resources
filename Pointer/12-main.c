#include "main.h"

int main(void)
{
	char a[7];

	*a = 's';
	*(a + 1) = 'o';
	*(a + 2) = 'l';
	*(a + 3) = 'o';
	*(a + 3) = 'm';
	*(a + 4) = 'o';
	*(a + 5) = 'o';
	*(a + 6) = 'n';

	printf("*a: %c\n*(a + 1): %c\n*(a + 2): %c\n*(a + 3): %c\n*(a + 3): %c\n*(a + 4): %c\n*(a + 5): %c\n*(a + 6): %c",*a, *(a + 1), a[2], *(a + 3), a[4], a[5], a[6]);

	return (0);
}
