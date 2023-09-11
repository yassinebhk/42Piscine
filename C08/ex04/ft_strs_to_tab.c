/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:32:05 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/26 00:10:58 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	letter;
	int		cont;

	cont = 0;
	letter = *src;
	while (letter != '\0')
	{
		*(dest + cont) = letter;
		letter = *(src + cont + 1);
		cont++;
	}
	*(dest + cont) = letter;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	str = ft_strcpy(str, src);
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	s_stock_str	*cad;
	int			i;

	cad = (s_stock_str *)malloc((ac + 1) * (sizeof(s_stock_str)));
	i = 0;
	while (i < ac)
	{
		cad[i]->str = av[i];
		cad[i]->size = ft_strlen(av[i]);
		cad[i]->copy = ft_strdup(av[i]);
		i++;
	}
	cad[i]->str = 0;
	cad[i]->size = 0;
	cad[i]->copy = 0;
	return (cad);
}
