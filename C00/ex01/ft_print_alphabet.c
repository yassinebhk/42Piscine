/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:17:56 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/07 13:18:27 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	cont;
	int	c;

	cont = 0;
	c = 97;
	while (cont < 26)
	{
		write(1, &c, 1);
		cont++;
		c++;
	}
}
