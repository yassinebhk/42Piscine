/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:18:49 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/08 19:06:37 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	c;
	int	cont;

	cont = 0;
	c = 122;
	while (cont < 26)
	{
		write (1, &c, 1);
		cont++;
		c--;
	}
}
