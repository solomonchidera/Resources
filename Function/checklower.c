#include "main"


int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);

	return (0);
}

int main(void)
{
	int i;
	i = _islower('F');
	printf("%d", i);
	i = _islower('f');
	printf("%d", i);
	i = _islower('Y');
	printf("%d", i);
	i = islower('H');
	printf("%d", i);
	i = _islower('f');
	printf("%d", i);

	return (0);
}
