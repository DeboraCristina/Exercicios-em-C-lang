#include <stdio.h>

void fimdatabela(char *str)
{
	#include <unistd.h>

	int	n = 0;
	while (*(str + n) != 0)
	{
		write(1, &*(str + n), 1);
		n ++;
	}
	
	write(1, "\n", 1);
}

void testarfimdatabela(void)
{ 	
	char	*string01;
	char	string02[] = "def";

	string01 = "abc";
	
	fimdatabela(string01);
}

void	exemplo01()
{
	char	c;

	c = '\0'; //'\0' é igual a 0
	printf("%d", c);
}

void	exemplo02()
{
	char	*str;

	//criar variaveis com "" é como criar uma constante.
	//são imutaveis
	str = "lol"; // a qui temos. {'l', 'o', 'l' E 0}
	// cada qual com seu código ASCII e espaço na memória.
	// str[0] = 'p'; // resulta em erro.
	printf("letra - %c | string - %s | endereço - %p\n", *str, str, str);
}

void	exemplo03()
{
	//para poder manipular a string.
	//marcamos um espaço na memória pra ela.
	char	str[] = "lol";

	str[0] = 'g';
	printf("1ªletra - %c | string - %s | endereço - %p\n", *str, str, str);
}

int main (void)
{
	testarfimdatabela();
	return (0);
}