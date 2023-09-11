/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:48:08 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/13 14:27:47 by ybouhaik         ###   ########.fr       */
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
	if (!(*(str + cont) >= 'A' && *(str + cont) <= 'Z'))
	{
		dif = 0;
	}
	return (dif);
}

int	ft_str_is_uppercase(char *str)
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
