/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:56:40 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/19 19:39:06 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	long	num;
	int		cont;

	cont = 1;
	num = 0;
	while (((*str >= 9 && *str <= 13) || *str == 32) && *str != '\0')
		str++;
	while ((*str == '-' || *str == '+') && *str != '\0')
	{
		if (*str == '-')
			cont *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	return ((int)num * cont);
}
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int	a;

// 	a = ft_atoi(" - -3a13h  ");
// 	printf("tamaño yo: %d", a);
// 	a = atoi(" -313h ");
// 	printf("\ntamaño atoi: %d", a);
// 	printf("\n");
// 	return (0);
// }
