/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 22:26:52 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/09 23:33:00 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	cont;
	int	swap;
	int	i;

	cont = 0;
	while (cont < size)
	{	
		i = cont;
		while (i < size)
		{
			if (*(tab + i) < *(tab + cont))
			{
				swap = *(tab + cont);
				*(tab + cont) = *(tab + i);
				*(tab + i) = swap;
			}
			i++;
		}
		cont++;
	}
}
