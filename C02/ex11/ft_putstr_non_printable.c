/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:17:14 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/12 20:36:27 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex_conversor(char *str, int cont)
{
	const char	*hex;
	char		c;

	hex = "0123456789abcdef";
	c = *(str + cont);
	write(1, "\\", 1);
	write(1, hex + (unsigned char)c / 16, 1);
	write(1, hex + (unsigned char)c % 16, 1);
}

int	ft_srtlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

void	ft_print(char *str, int cont)
{
	if (!(*(str + cont) >= 32 && *(str + cont) <= 126))
	{
		hex_conversor(str, cont);
	}
	else
		ft_putchar(*(str + cont));
}

void	ft_putstr_non_printable(char *str)
{
	int	size;
	int	cont;

	cont = 0;
	size = ft_srtlen(str);
	while (*(str + cont) != '\0')
	{
		ft_print(str, cont);
		cont++;
	}
}
