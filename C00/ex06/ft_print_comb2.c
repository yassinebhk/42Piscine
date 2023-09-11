/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:18:14 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/08 19:30:44 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribe(int n1, int n2, int n3, int n4)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
}

void	ft_write(int izq, int der)
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;

	n1 = izq / 10 + 48;
	n2 = izq % 10 + 48;
	n3 = der / 10 + 48;
	n4 = der % 10 + 48;
	if (izq == 98 && der == 99)
	{
		escribe(n1, n2, n3, n4);
	}
	else
	{
		escribe(n1, n2, n3, n4);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	izq;
	int	dch;

	izq = 0;
	while (izq <= 98)
	{
		dch = izq + 1;
		while (dch <= 99)
		{
			ft_write(izq, dch);
			dch++;
		}
		izq++;
	}
}
