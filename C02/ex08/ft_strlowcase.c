/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:37:31 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/13 14:29:33 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	cont;

	cont = 0;
	while (*(str + cont) != '\0')
	{
		if (*(str + cont) >= 'A' && *(str + cont) <= 'Z')
		{
			*(str + cont) = *(str + cont) + 32;
		}
		cont++;
	}
	return (str);
}
