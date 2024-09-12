#include <stdio.h>


int main(void)
{
	FILE *file;
	char text[20];

	file = fopen("example.txt", "w");

	if (file == NULL)
	{
		perror("Unable to open file\n");
		return (1);
	}

	fprintf(file, "Hello World!\n");

	fclose(file);

	file = fopen("example.txt", "r");

	if (file == NULL)
	{
		perror("Get the hell out of this place!\n");
		return (1);
	}

	fgets(text, sizeof(text), file);
	printf("Read from file %s\n", text);
	fclose(file);

	return (0);
}
