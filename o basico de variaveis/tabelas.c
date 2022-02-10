#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	a[5][5];
	char	p;

	printf("----------\n");
	for (int i = 0; i < 5; i++)
	{
		p = 'a';
		for (int n = 0; n < 5; n++)
		{
			a[i][n] = p;
			p++;
			write(1, &a[i][n], 1);
		}
		printf("\n");
	}
	
	
	printf("----------\n");
}