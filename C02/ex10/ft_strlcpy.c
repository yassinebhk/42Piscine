/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:25:31 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/13 14:36:59 by ybouhaik         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	cont;
	int	n;
	int	tam;

	tam = size;
	n = ft_strlen(src);
	cont = 0;
	while (cont < tam && *(src + cont) != '\0')
	{
		*(dest + cont) = *(src + cont);
		cont++;
	}
	*(dest + size - 1) = '\0';
	while (cont < tam)
	{
		*(dest + cont) = '\0';
		cont++;
	}
	return (n);
}
