#include "main.h"


int main(void)
{
	pid_t pid = getpid();
	pid_t ppid = getppid();

	printf("Process id is %d\n", pid);
	printf("Parent process id is %d\n", pppid);

	return (0);
}
