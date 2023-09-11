/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:53:30 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/19 15:53:36 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;
	int		cont;

	cont = 1;
	c = *str;
	while (c != '\0')
	{
		write(1, &c, 1);
		c = *(str + cont);
		cont++;
	}
}
/*
int main (){

	char array[] = "dfgf";
	char *c = "hello";
	ft_putstr(array);
	ft_putstr(array);
}*/
