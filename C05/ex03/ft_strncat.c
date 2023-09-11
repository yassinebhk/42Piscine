/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:33:43 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/17 22:33:47 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	cont;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	cont = 0;
	while (*src != '\0' && cont < nb)
	{
		*(dest + i) = *src;
		i++;
		src++;
		cont++;
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
	char src [] = "1?tractor";
	unsigned int tam = 3;
	ft_strncat (dest, src, tam);
	printf ("Cadena con ft: %s", dest);
	strncat(dest2, src, tam);
	printf ("\nCadena teórica: %s", dest2);
	printf ("\n");
	return (0);
}*/
