/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:57:26 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/19 23:52:20 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_in_base(char *base, char c)
{
	int	pos;

	pos = 0;
	while (*(base + pos) != c && *(base + pos))
		pos++;
	if (*(base + pos) == c)
		return (pos + '0');
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
		num += ft_char_in_base(base, *str) - '0';
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
