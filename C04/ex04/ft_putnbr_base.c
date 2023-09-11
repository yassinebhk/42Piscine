/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:57:04 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/19 19:17:49 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_srtlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
		++cont;
	return (cont);
}

void	hex_conversor(char *str, long nbr)
{
	int	size;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	size = ft_srtlen(str);
	if (nbr > 0)
	{
		hex_conversor(str, nbr / size);
		write(1, str + nbr % size, 1);
	}
}

int	ft_streq(char *s1)
{
	int	i;
	int	j;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		j = i + 1;
		while (*(s1 + j) != '\0')
		{
			if (*(s1 + j) == *(s1 + i))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	tam;
	int	ok;

	ok = 1;
	tam = 0;
	while (*(base + tam) != '\0' && ok)
	{
		if (*(base + tam) == '+' || *(base + tam) == '-')
			ok = 0;
		tam++;
	}
	if (ok)
		ok = ft_streq(base);
	if (tam > 1 && ok)
	{
		if (nbr == 0)
			write(1, base, 1);
		else
			hex_conversor(base, (long)nbr);
	}
}
// #include <limits.h>

// int	main(void)
// {
// 	char base[] = "0123456789";
// 	ft_putnbr_base(INT_MAX, base);
// }
