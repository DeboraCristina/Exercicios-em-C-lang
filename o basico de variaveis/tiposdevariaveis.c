#include <stdio.h>

int main()
{
	signed char c; //signed permite usar o byte indo de -128 a 127. padrão
	unsigned int i; //unsigned permite usar o byte indo de 0 á 255.
	long int li; // ""alonga"" o tamanho. o int tem 4bytes o 'long int' tem 8.
	short int si; // ""diminui"" o tamanho. o int tem 4bytes o 'long int' tem 8.
	// signed e unsigned não funfa nos float e double
	float f; 
	double d;

	c = '\n';
	c = 106;
	printf("o char %c-%d tem %lu bytes\n",c , c ,sizeof(c));

	printf("\n");

	printf("o int tem %lu bytes\n", sizeof(i));
	printf("o long int tem %lu bytes\n", sizeof(li));
	printf("o short int tem %lu bytes\n", sizeof(si));

	printf("\n");

	f = 42.24;
	printf("o float %f tem %lu bytes\n",f ,sizeof(f));

	printf("\n");

	printf("o double tem %lu bytes\n", sizeof(d));
}