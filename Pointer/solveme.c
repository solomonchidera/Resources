#include  "main.h"

void modify(char *cc, char c)
{
	*cc = 'o';
	c = 'l';
}

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	modify(p, c);
	return (0);
}
