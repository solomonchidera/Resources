#include <stdio.h>

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	} 

	_puts_recursion(s - 1);
	putchar(*s);
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
