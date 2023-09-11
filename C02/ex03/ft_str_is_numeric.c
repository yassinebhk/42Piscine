/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:54:04 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/11 12:58:57 by ybouhaik         ###   ########.fr       */
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

int	ft_number(char *str, int cont, int dif)
{
	if (!(*(str + cont) >= '0' && *(str + cont) <= '9'))
	{
		dif = 0;
	}
	return (dif);
}

int	ft_str_is_numeric(char *str)
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
			dif = ft_number(str, cont, dif);
			cont++;
		}
	}
	return (dif);
}
