#include "main.h"

/**
 * main - PID
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t mypid;

	mypid = getpid();
	printf("%u\n", mypid);
	return (0);
}
