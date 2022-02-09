#include <stdio.h>

int main(void)
{
	int i;
	int n;

	i = 8;

	n = i == 42 ? 24 : (i / 2);

	printf("%d\n", n);
}
