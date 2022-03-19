/* ************************************************************************** */
/*                                                                            */
/*                                                         ____  U _____ u    */
/*   is_armstrong_number.c                                |  _ \ \| ___ |/    */
/*                                                       /| | | | |  _|       */
/*   Autor: Debora                                       U| |_| |\| |___      */
/*                                                        |____/ u|_____|     */
/*   Created: 2022/03/18                                   |||_   <<   >>     */
/*                                                        (__)_) (__) (__)    */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

int	ft_pow(int base, int expoente);

int	ft_pow(int base, int expoente)
{
	int	cont;
	int	expo;

	cont = 1;
	expo = base;
	while (cont++ < expoente)
		base *= expo;
	return (base);
}

int	lennum(int num);

int	lennum(int num)
{
	int	c;

	c = 0;
	while (num / 10 != 0 && ++c)
		num = num / 10;
	return (++c);
}

int	*digits(int size, int num);

int	*digits(int size, int num)
{
	int	*digits;
	int	cont;

	digits = (int *) malloc (size * sizeof(int));
	cont = 0;
	while (cont < size && num != 0)
	{
		digits[cont++] = num % 10;
		num /= 10;
	}
	return (digits);
}

bool	is_armstrong_number(int candidate)
{
	int	pot;
	int	*dig;
	int	cont;
	int	resultado;

	pot = lennum(candidate);
	dig = digits(pot, candidate);
	cont = 0;
	resultado = 0;
	while (cont < pot)
		resultado += ft_pow (dig[cont++], pot);
	if (candidate == resultado || candidate == 0)
		return (true);
	return (false);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d \n",is_armstrong_number(9));
	return (0);
}
*/
