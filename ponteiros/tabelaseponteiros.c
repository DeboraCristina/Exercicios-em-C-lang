#include <stdio.h>

void exemplo01(void)
{
	// virtualmente tab não existe. 
	//ele apenas uma referência pra saber onde 
	//está o primeiro item da tabela
	int tab[3];
	int *ptr;

	ptr = tab;
	printf("%p\n", tab);
}

void exemplo02(void)
{
	int tab[3];
	int *ptr;

	//tab[0] = 478;
	tab[1] = 150;
	//tab[n] == *(tab + n)
	printf("%d\n", *(tab + 1));
}

void exemplo03(void)
{
	int tab[3];
	int *tab2[2];

	tab[2] = 478;
	tab2[1] = tab;
	//tab2[1][2] = 18;
	//*(tab2[1] + 2) = 28;
	*(*(tab2 + 1) + 2) = 38;
	printf("%d\n", *(tab + 2));
}

int main(void)
{ 
	exemplo03();
	return (0);
}