#include <stdio.h>

void exemplo01(void)
{
	int i;
	int *ptr;

	i = 56;
	ptr = &i;
	printf("%d\n", *ptr);
	*ptr = 78;
	printf("%d\n", i);
}

void exemplo02(void)
{
	int a;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;

	a = 42;
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;

	printf("%d\n", ******ptr6);
	
}

int main(void)
{
	exemplo01();
	exemplo02();
	return (0);
}
