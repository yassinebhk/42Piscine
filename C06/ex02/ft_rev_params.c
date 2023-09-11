/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:24:20 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/20 02:36:17 by ybouhaik         ###   ########.fr       */
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr (argv[argc - i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
