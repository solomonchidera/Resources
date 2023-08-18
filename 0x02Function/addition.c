#include <stdio.h>

int addition();

int main(void)
{
	int answer;
	answer = addition();
	printf("The addition of the two numbers are %d\n", answer);
	return(0);
}
int addition()
{
	int num1 = 2, num2 = 5;
	return (num1 + num2)
}
