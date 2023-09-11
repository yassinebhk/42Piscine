/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:12:33 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/11 13:24:33 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_srtlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

int	ft_low(char *str, int cont, int dif)
{
	if (!(*(str + cont) >= 'a' && *(str + cont) <= 'z'))
	{
		dif = 0;
	}
	return (dif);
}

int	ft_str_is_lowercase(char *str)
{
	int	size;
	int	cont;
	int	dif;

	dif = 1;
	cont = 0;
	size = ft_srtlen(str);
	if (size == 0)
	{
		return (1);
	}
	else
	{
		while (*(str + cont) != '\0')
		{
			dif = ft_low(str, cont, dif);
			cont++;
		}
	}
	return (dif);
}
