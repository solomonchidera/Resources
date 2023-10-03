#include "main.h"


int main(void)
{
	pid_t pid = process;
	ppid_t ppid = parentprocess;

	process = getpid();
	parentprocess();

	printf("Process id is %d\n", process);
	printf("Parent process id is %d\n", parentprocess);

	return (0);
}
