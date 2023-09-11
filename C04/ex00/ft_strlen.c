/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:52:48 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/19 17:18:49 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char array[] = "lo6 0\n";
	int tam = ft_srtlen(array);
	printf("Numero de car:%d", tam);
}*/
