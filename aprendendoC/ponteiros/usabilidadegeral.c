#include <stdio.h>

void	fct(int *a)
{
	*a = *a + 42;
}
void exemplo01()
{
	int a;

	a = 42;
	printf("%d\n", a);
	fct(&a);
	printf("%d\n", a);
	return (0);
}

int	main(void)
{
	int *ptr;

	ptr = 0; // ponteiro nulo
	return (0);
}
