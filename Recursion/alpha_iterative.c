#include <unistd.h>
#include <stdio.h>

void print_char(char c)
{
	write(1, &c, 1);
}

void print_alpha(void)
{
	char c;
	c = 'a';
	while (c <= 'z')
	{
		print_char(c);
		c = c + 1;
	}
}

int main(void)
{
	print_alpha();
	print_char(10);
	return (0);
}
