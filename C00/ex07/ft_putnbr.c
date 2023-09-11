/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:23:19 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/08 20:18:36 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define INT_MIN -2147483648

int	is_neg(int num)
{
	if (num < 0)
	{
		return (1);
	}
	else
		return (0);
}

int	primer_digito(int num)
{
	int	dig;

	while (num > 0)
	{
		dig = num + 48;
		num = num / 10;
	}
	return (dig);
}

int	contador(int num)
{
	int	dig;
	int	cont;

	cont = 0;
	while (num > 0)
	{
		dig = num + 48;
		num = num / 10;
		cont++;
	}
	return (cont);
}

int	ft_print(int nb, int cont, int divisor, int dig)
{
	divisor = 1;
	dig = primer_digito(nb);
	cont = contador(nb);
	cont--;
	while (cont != 0)
	{
		divisor *= 10;
		cont--;
	}
	write(1, &dig, 1);
	return (divisor);
}

void	ft_putnbr(int nb)
{
	int	cont;
	int	dig;
	int	divisor;

	dig = 0;
	cont = 2;
	if (nb == 0)
		write(1, "0", 1);
	if (nb == INT_MIN)
		write (1, "-2147483648", 11);
	else if (is_neg(nb) == 1)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	while (nb != 0 && nb != INT_MIN)
	{
		divisor = ft_print(nb, cont, divisor, dig);
		nb = nb % divisor;
	}
}
