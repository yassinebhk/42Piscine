/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:13:45 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/09 20:11:07 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	swap;

	cont = 0;
	while (cont < (size / 2))
	{	
		swap = *(tab + cont);
		*(tab + cont) = *(tab + size - cont - 1);
		*(tab + size - cont - 1) = swap;
		cont++;
	}
}
