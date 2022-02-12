#include <stdio.h>

void operacoesbasicas(void)
{
	int i;

	//inteiro arredonda-se pra baixo.

	i = 42;
	i = 42 / 2;
	//** ou
	i /= 2;
	printf("%d\n", i);

	i = 42;
	i = 42 % 4 ;
	//** ou
	//i %= 2;
	printf("%d\n", i);

	i = 42;
	i = 42 * 2;
	//** ou
	i *= 2;
	printf("%d\n", i);

	i = 42;
	i = 42 + 2;
	//** ou
	i += 2;
	// pra add 1
	//i++;
	printf("%d\n", i);

	i = 42;
	i = 42 - 2;
	//** ou
	i -= 2;
	//pra diminuir 1
	//i--;
	printf("%d\n", i);
}

void acressimo_decressimo(void)
{
	int n;
	n = 24;
	printf("%d\n", n++); // printa n ent add 1
	printf("%d\n", n);

	printf("%d\n", ++n); // add 1 ent printa n

	n = 24;
	//printf("%d\n", ++n + n); // erro. não pode reusar a msm var na msm linha.
	printf("%d\n", ++n + 5);
}

int main(void)
{
	//operacoesbasicas();

	//acressimo_decressimo();
	int n;

	n = 24;
	//n = 24 - 24 / 10 * 10; // 4
	n = 24 + (24 / (2 * 2));
	// ordem de prioridade é
	// (/ * %) (- +)
	printf("%d\n", n);

}