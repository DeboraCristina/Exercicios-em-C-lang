/* ************************************************************************** */
/*                                                                            */
/*                                                         ____  U _____ u    */
/*   resistor_color.c                                     |  _ \ \| ___ |/    */
/*                                                       /| | | | |  _|       */
/*   Autor: Debora                                       U| |_| |\| |___      */
/*                                                        |____/ u|_____|     */
/*   Created: 2022/03/19                                   |||_   <<   >>     */
/*                                                        (__)_) (__) (__)    */
/*                                                                            */
/* ************************************************************************** */

#include "resistor_color.h"
#include <stdlib.h>

int	color_code(resistor_band_t color)
{
	if (color >= BLACK && color <= WHITE)
		return (color);
	return (0);
}

resistor_band_t	*colors(void)
{
	resistor_band_t	*resistores;

	resistores = (resistor_band_t *) malloc(10 * sizeof(char));
	for (int i = 0; i < 10; i++)
		resistores[i] = i;
	return (resistores);
}

#include <stdio.h>
int	main(void)
{
	resistor_band_t resis;
	int	inteiro;

	resis = GREEN;
	inteiro = 3;
	if (resis >= RED && resis <= VIOLET)
		printf("cores quentes\n");
	else
		printf("cores frias\n");
	printf("%d\n", color_code(resis));
	printf("%d\n", color_code(inteiro));
}
