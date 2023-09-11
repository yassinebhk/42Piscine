/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:22:30 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/25 01:06:44 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putnbr_base(int nbr, char *base);

int	ft_char_in_base(char *base, char c)
{
	int	pos;

	pos = 0;
	while (*(base + pos) != c && *(base + pos))
		pos++;
	if (*(base + pos) == c)
		return (pos);
	else
		return (-1);
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

int	ft_atoi(char *str, char *base, int tam)
{
	long	num;
	int		cont;

	cont = 1;
	num = 0;
	while (((*str >= 9 && *str <= 13) || *str == 32) && *str != '\0')
		str++;
	while ((*str == '-' || *str == '+') && *str != '\0')
	{
		if (*str == '-')
			cont *= -1;
		str++;
	}
	while (ft_char_in_base(base, *str) != -1 && *str != '\0')
	{
		num *= tam;
		num += ft_char_in_base(base, *str);
		str++;
	}
	return ((int)num * cont);
}

int	ft_atoi_base(char *str, char *base)
{
	int	tam;
	int	ok;
	int	num;

	ok = 1;
	tam = 0;
	num = 0;
	while (*(base + tam) != '\0' && ok)
	{
		if (*(base + tam) == '+' || *(base + tam) == '-' || *(base + tam) <= 32
			|| *(base + tam) >= 127)
			ok = 0;
		tam++;
	}
	if (ok)
		ok = ft_streq(base);
	if (tam > 1 && ok)
	{
		num = ft_atoi(str, base, tam);
	}
	return (num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str_num;
	int		num_dec;

	num_dec = ft_atoi_base(nbr, base_from);
	if (num_dec == 0)
	{
		str_num = (char *)malloc(2 * sizeof(char));
		str_num[0] = '0';
		str_num[1] = '\0';
		return (str_num);
	}
	str_num = ft_putnbr_base(num_dec, base_to);
	if (str_num == NULL)
		return (NULL);
	return (str_num);
}
