#include "main.h"

int main(void)
{
	FILE *file;
	char str[70];

	file = fopen("loremIpsum.txt", "r");
	if (NULL == file)
	{
		perror("Dude watch your back :)\n");
		return (-1);
	}

	if (fgets(str, 70, file) != NULL)
	{
		printf("%s\n", &str);
	}

	fclose(file);
	return (0);
}
