/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:50:50 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/23 20:15:32 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

struct			s_types
{
	int			tam;
	char		*concat;
	int			i;
	int			j;
	int			pos;
	int			k;
};

struct s_types	ft_init(void)
{
	struct s_types	vbs;

	vbs.i = 0;
	vbs.pos = 0;
	return (vbs);
}

int	ft_strlen_str(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

int	ft_strlen(char **str, int size)
{
	int	tam;
	int	i;
	int	j;

	i = 0;
	tam = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			tam++;
		}
		i++;
	}
	return (tam);
}

char	*ft_concat(struct s_types vbs, char **strs, char *sep, int size)
{
	int	iter;

	iter = 0;
	while (iter < size)
	{
		vbs.k = 0;
		vbs.j = 0;
		while (strs[vbs.i][vbs.j] != '\0')
		{
			vbs.concat[vbs.pos] = strs[vbs.i][vbs.j];
			vbs.pos++;
			vbs.j++;
		}
		while (sep[vbs.k] && (iter + 1) < size)
		{
			vbs.concat[vbs.pos] = sep[vbs.k];
			vbs.pos++;
			vbs.k++;
		}
		vbs.i++;
		iter++;
	}
	vbs.concat[vbs.pos] = '\0';
	return (vbs.concat);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	struct s_types	vbs;
	int				cant;

	vbs = ft_init();
	if (size == 0)
	{
		vbs.concat = (char *)malloc(sizeof(char));
		vbs.concat[0] = '\0';
		return (vbs.concat);
	}
	vbs.tam = ft_strlen(strs, size);
	cant = vbs.tam + ft_strlen_str(sep) * (size - 1) + 1;
	vbs.concat = (char *)malloc(cant * sizeof(char));
	vbs.concat = ft_concat(vbs, strs, sep, size);
	return (vbs.concat);
}
