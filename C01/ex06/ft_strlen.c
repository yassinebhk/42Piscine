/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:58:20 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/09 18:52:36 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont ++;
	}
	return (cont);
}
