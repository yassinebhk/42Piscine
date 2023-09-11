/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:22:43 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/25 01:08:08 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_streq(char *s1);

int	ft_srtlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
		++cont;
	return (cont);
}

int	tam_num(char *str, int nbr)
{
	int			size;
	static int	cont;

	cont = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
	}
	size = ft_srtlen(str);
	if (nbr > 0)
	{
		tam_num(str, nbr / size);
		cont++;
	}
	return (cont);
}

char	*hex_conversor(char *str, int nbr, char *num)
{
	static int	size;
	static int	cont;
	static int	pos;

	pos = 0;
	cont = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
	}
	size = ft_srtlen(str);
	if (nbr > 0)
	{
		hex_conversor(str, nbr / size, num);
		num[pos] = str[nbr % size];
		pos++;
	}
	*(num + pos) = '\0';
	return (num);
}

char	*ft_put_sign(char *num)
{
	int		i;
	char	a;
	char	b;

	i = 1;
	a = *num;
	b = *(num + 1);
	*num = '-';
	while (*(num + i) != '\0')
	{
		*(num + i) = a;
		a = b;
		i++;
		b = *(num + i);
	}
	*(num + i) = a;
	*(num + i + 1) = b;
	return (num);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		tam;
	int		ok;
	char	*num;
	int		pos;

	ok = 1;
	tam = 0;
	pos = 0;
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
		num = (char *)malloc((tam_num(base, nbr) + 2) * sizeof(char));
		num = hex_conversor(base, nbr, num);
		if (nbr < 0)
			num = ft_put_sign(num);
		return (num);
	}
	return (NULL);
}
