/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:50:25 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/22 22:50:28 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	array = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		*(array + i) = min;
		i++;
		min++;
	}
	return (array);
}
// #include <stdio.h>
// int main (){

//     int *array = ft_range (-1, 1);
//     int i = 0;
//     while (i < 2)
//     {
//         printf ("%d", array [i]);
//         i++;
//     }
// }
