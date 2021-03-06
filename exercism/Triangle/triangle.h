/* ************************************************************************** */
/*                                                                            */
/*                                                         ____  U _____ u    */
/*   triangle.h                                           |  _ \ \| ___ |/    */
/*                                                       /| | | | |  _|       */
/*   Autor: Debora                                       U| |_| |\| |___      */
/*                                                        |____/ u|_____|     */
/*   Created: 2022/03/18                                   |||_   <<   >>     */
/*                                                        (__)_) (__) (__)    */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_H
#define TRIANGLE_H

typedef	struct {
	double	a;
	double	b;
	double	c;
} triangle_t;

int	is_equilateral(triangle_t sides);
int	is_isosceles(triangle_t sides);
int	is_scalene(triangle_t sides);

#endif
