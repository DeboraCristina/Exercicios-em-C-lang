#include <stdio.h>

int main(void)
{
	int i;
	int i2;

	i = 11;
	i2 = 6;
	printf("00001011\n");
	printf("00000110\n");

	printf("\n");

	//compara os bits
	printf("%d & %d :\n", i, i2);
	printf("00000010\n");

	printf("\n");

	printf("%d | %d :\n", i, i2);
	printf("00001111\n");

	printf("\n");

	printf("%d ^ %d :\n", i, i2);
	printf("00001101\n");

	printf("\n");

	//invert bits
	printf("~%d:\n", i);
	printf("11110100\n");
	printf("%d\n", ~i);

	printf("\n");

	//desloca os bits. add 0 no final
	printf("%d << 1:\n", i);
	printf("00010110\n");
	printf("%d\n", i << 1);
	printf("%d >> 1:\n", i);
	printf("00000101\n");
	printf("%d\n", i >> 1);

	printf("-128 >> 1:\n");
	printf("11000000\n");
	unsigned int num = -128;
	printf("%d\n", num << 1);
	
}