/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:41:58 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/11 14:44:42 by ybouhaik         ###   ########.fr       */
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

int	ft_print(char *str, int cont, int dif)
{
	if (!(*(str + cont) >= 32 && *(str + cont) <= 126))
	{
		dif = 0;
	}
	return (dif);
}

int	ft_str_is_printable(char *str)
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
			dif = ft_print(str, cont, dif);
			cont++;
		}
	}
	return (dif);
}
