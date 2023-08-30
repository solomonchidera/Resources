#include <stdio.h>
#include <unistd.h>

void print_char(char c)
{
	write(1, &c, 1);
}

void print_all_alphabet_starting_from(char c)
{
	if (c > 'z')
		return;
	print_char(c);
	print_all_alphabet_starting_from(c + 1);
}

void print_alphabet(void)
{
	print_all_alphabet_starting_from('a');
	
}

int main(void)
{
	print_alphabet();
	print_char(10);
	return (0);
}
