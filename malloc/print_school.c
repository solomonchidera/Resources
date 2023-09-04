#include <stdio.h>

void prints(void)
{
	char str[] = "Holberton";
	str[0] = 'S';
	printf("%s\n", str);
}

int main(void)
{
	prints();
	return (0);
}
