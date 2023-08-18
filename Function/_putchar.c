#include "main.h"

/**
 * _putchar - user-defined putchar fuction that writes a charcter to the stdout
 * @c: character to print
 *
 * Return: on success 1.
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

