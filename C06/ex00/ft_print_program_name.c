/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:23:43 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/20 02:30:51 by ybouhaik         ###   ########.fr       */
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
	(void)argc;
	ft_putstr (argv[0]);
	ft_putchar('\n');
	return (0);
}
