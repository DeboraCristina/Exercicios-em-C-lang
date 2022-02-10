#include <stdio.h>

int main(void)
{
	int b;
	int a;
	int c;
	int *ptr;

	b = 23;
	c = 45;
	ptr = &a;
	printf("%p\n", ptr);
	printf("%p\n", &b);
	printf("%p\n", &c);
	printf("%p\n", ptr - 1);
	printf("%d\n", *(ptr - 1));
	*(ptr - 1) = 78;
	printf("%d\n", b);
	printf("%d\n", c);
	return (0);
}