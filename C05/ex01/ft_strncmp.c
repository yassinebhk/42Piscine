/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:33:13 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/19 23:21:33 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	cont;

	cont = 0;
	diff = 0;
	while (*s1 == *s2 && *s1 != 0 && cont < n)
	{
		s1++;
		s2++;
		cont++;
	}
	if (*s1 != *s2 && cont < n)
	{
		diff = *s1 - *s2;
	}
	return (diff);
}
/*#include <stdio.h>
#include <string.h>

int main (void)
{
	char s1 [] = "hola";
	char s2 [] = "?ola";
	int dif = strncmp(s1,s2, 3);
	printf ("funcion:%d", dif);
	printf ("\n");
	printf ("yo:%d", ft_strncmp(s1,s2, 3));
	printf ("\n");
	return (0);
}*/
