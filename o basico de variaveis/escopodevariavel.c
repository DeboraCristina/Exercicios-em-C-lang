#include <stdio.h>

int	a;

int	main(void)
{
	int var;
	var = 4;
	{
		//int var;
		a = 15;
		printf("%d\n", var);
	}
	//var = 20;
	printf("%d\n", a);
}