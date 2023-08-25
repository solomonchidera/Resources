#include "main.h"

int main(void)
{
	int r_c[5][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11},{12,13,14,15},{16,17,18,19}};
	int row;
	int column;

	for (row = 0; row < 5; row++)
	{
		for (column = 0; column <= 4; column++)
		{
			printf("Element at r_c[%d][%d]: ", row, column);
			printf("%d\n", r_c[row][column]);
		}
	}
	return (0);
}
