/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:50:44 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/17 22:33:33 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	while (*src != '\0')
	{
		*(dest + i) = *src;
		i++;
		src++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*#include <string.h>
#include <stdio.h>

int main (void)
{
	char dest [100] = "hola";
	char dest2[100] = "hola";
	char src [] = "y adios";
	ft_strcat (dest, src);
	printf ("Cadena con ft: %s", dest);
	strcat(dest2, src);
	printf ("\nCadena teórica: %s", dest2);
	return (0);
}*/
