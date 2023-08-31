#include <stdio.h>

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(10);
	}
	else
	{
		putchar(*s);
		_puts_recursion(s+1);
	}
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
