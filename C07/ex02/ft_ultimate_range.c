/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:50:40 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/24 19:56:44 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	tam;

	i = 0;
	tam = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (-1);
	*range = array;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	**range;
// 	int	size;
// 	int	i;

// 	range = (int **)malloc(sizeof(int *));
// 	range[0] = (int *)malloc(8 * sizeof(int));
// 	size = ft_ultimate_range(range, -1, 7);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", range[0][i]);
// 		i++;
// 	}
// }