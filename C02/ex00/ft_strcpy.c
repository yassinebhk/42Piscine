/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:59:01 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/10 15:51:49 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	letter;
	int		cont;

	cont = 0;
	letter = *src;
	while (letter != '\0')
	{	
		*(dest + cont) = letter;
		letter = *(src + cont + 1);
		cont ++;
	}
	*(dest + cont) = letter;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont ++;
	}
	return (cont);
}
