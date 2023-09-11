/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:07:42 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/09 17:54:53 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		cont;
	char	c;

	cont = 1;
	c = *str;
	while (c != '\0')
	{
		write (1, &c, 1);
		c = *(str + cont);
		cont ++;
	}
}
