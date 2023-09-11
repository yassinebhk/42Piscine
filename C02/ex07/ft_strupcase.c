/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:06:57 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/11 15:25:32 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	cont;

	cont = 0;
	while (*(str + cont) != '\0')
	{
		if (*(str + cont) >= 'a' && *(str + cont) <= 'z')
		{
			*(str + cont) = *(str + cont) - 32;
		}
		cont++;
	}
	return (str);
}
