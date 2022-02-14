#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **exemplo()
{
	int temp;
	
	char **matriz = (char**)malloc(4*sizeof(char));
	for (temp = 0; temp < 4; temp++ )
		*(matriz + temp) = (char*)malloc(4*sizeof(char));
	char c = 'a';	
	for (temp = 0; temp < 4; temp++ )
	{
		for (int i = 0; i < 4; i++)
		{
			matriz[temp][i] = c;
			c++;
		}
	}
	
	// matriz[0][0] = 'a';
	// matriz[0][1] = 'b';
	// matriz[0][2] = 'c';
	// matriz[0][3] = 'd';

	// matriz[1][0] = 'a';
	// matriz[1][1] = 'b';
	// matriz[1][2] = 'c';
	// matriz[1][3] = 'd';

	// matriz[2][0] = 'a';
	// matriz[2][1] = 'b';
	// matriz[2][2] = 'c';
	// matriz[2][3] = 'd';

	// matriz[3][0] = 'a';
	// matriz[3][1] = 'b';
	// matriz[3][2] = 'c';
	// matriz[3][3] = 'd';

	return matriz;
}

int main(void)
{
	int temp;

	char **mat = exemplo();

	for (temp = 0; temp < 4; temp++)
		printf("string %d =| %s |\n", temp, *(mat + temp));

	return 0;
}