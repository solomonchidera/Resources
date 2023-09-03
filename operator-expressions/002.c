# include <stdio.h>

int main(void)
{
	int Total = 0, i;
	for (i = 0 ; i < 10; i++)
	{
		Total += i; /* This is same as Total = Toatal+i*/
	}
	printf("Total = %d", Total);

	return (0);
}
