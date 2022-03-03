/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_isogram.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:45:37 by desilva           #+#    #+#             */
/*   Updated: 2022/03/02 23:21:19 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_alpha(char c);

bool	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (true);
	return (false);
}

char	to_lower(char c);

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

bool	is_isogram(const char phrase[]);

bool	is_isogram(const char phrase[])
{
	char	l;
	char	c[2];
	char	status;

	c[0] = 0;
	if (phrase == 0)
		return (false);
	while (phrase[(int) c[0]])
	{
		c[1] = 0;
		l = phrase[(int) c[0]];
		status = 0;
		if (is_alpha(l))
		{
			while (phrase[(int) c[1]])
			{
				if (to_lower(l) == to_lower(phrase[(int) c[1]++]))
					status++;
				if (status > 1)
					return (false);
			}
		}
		c[0]++;
	}
	return (true);
}

/*
#include <stdio.h>
int	main(void)
{
	int	r0 = is_isogram(NULL);
	int	r1 = is_isogram("isogram");
	int	r2 = is_isogram("hello");
	int	r3 = is_isogram("six-year-old");
	int	r4 = is_isogram("hello, world!");
	int	r5 = is_isogram("");
	printf("%d\n", r0);
	printf("%d\n", r1);
	printf("%d\n", r2);
	printf("%d\n", r3);
	printf("%d\n", r4);
	printf("%d\n", r5);
}
*/
