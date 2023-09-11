/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prim_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:19:19 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/07 13:19:27 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	cont;

	cont = 48;
	while (cont <= 57)
	{
		write (1, &cont, 1);
		cont++;
	}	
}
