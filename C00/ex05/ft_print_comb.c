/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:22:35 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/07 13:22:41 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b, int c)
{
	write (1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != 7 + 48)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 48;
	c = 48;
	while (a <= 9 + 48)
	{
		b = a + 1;
		while (b <= 9 + 48)
		{
			c = b + 1;
			while (c <= 9 + 48)
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
