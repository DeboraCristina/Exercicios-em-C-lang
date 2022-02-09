#include <stdio.h>

void	stack(void)
{
	// CUIDADO
	int a[1];
	int i;

	i = 5;
	a[0] = 24;
	a[1] = 24;
	a[2] = 50;

	printf("%d\n", i);
	printf("%d\n", a[2]);
}

int main(void)
{
	stack();
}