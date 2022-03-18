#include "triangle.h"
#include <stdio.h>

int	is_triangle(triangle_t sides);

int	is_triangle(triangle_t sides)
{
	if (sides.a == 0 || sides.b == 0 || sides.c == 0 )
		return (0);
	else if (sides.a > sides.b + sides.c || sides.b > sides.a + sides.c || sides.c > sides.b + sides.a)
		return (0);
	return (1);
}

int	is_equilateral(triangle_t sides);

int	is_equilateral(triangle_t sides)
{
	if (!is_triangle(sides))
		return (0);
	if (sides.a == sides.b && sides.b == sides.c)
		return (1);
	return (0);
}

int	is_isosceles(triangle_t sides);

int	is_isosceles(triangle_t sides)
{
	if (!is_triangle(sides))
		return (0);
	if (sides.a == sides.b || sides.b == sides.c || sides.a == sides.c)
		return (1);
	return (0);
}

int	is_scalene(triangle_t sides);

int	is_scalene(triangle_t sides)
{
	if (!is_triangle(sides))
		return (0);
	if (sides.a != sides.b && sides.b != sides.c && sides.a != sides.c)
		return (1);
	return (0);
}

int	main(void)
{
	triangle_t lados = { 4, 4, 4 };

	printf("Forma um triangulo \" %d \"\n",is_triangle(lados));
	printf("É equilatero \" %d \"\n",is_equilateral(lados));
	printf("É isósceles \" %d \"\n",is_isosceles(lados));
	printf("É escaleno \" %d \"\n",is_scalene(lados));
}
