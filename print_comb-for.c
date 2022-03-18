#include <unistd.h>

int main(void)
{
	char	n;
	
	n = '9';
	for	(char z = '0'; z <= n; z++)
	{
		for	(char u = z + 1; u <=  n + 1; u++)
		{
			for (char d = u + 1; d < n + 1; d++)
			{
				write(1, &z, 1);
				write(1, &u, 1);
				write(1, &d, 1);
				if (z < '7')
				{
					//write(1, ", ", 2);
					write(1, ", ", 1);
				}
			}
		}
	}
}
