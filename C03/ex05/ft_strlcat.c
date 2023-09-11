/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:34:12 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/23 19:47:37 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sizedest;
	unsigned int	sizesrc;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	sizedest = j;
	sizesrc = ft_strlen(src);
	if (size <= sizedest)
		return (sizesrc + size);
	while (*(dest + j) != '\0')
		j++;
	while (*(src + i) != '\0' && i < size - 1 - sizedest)
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (sizedest + sizesrc);
}
