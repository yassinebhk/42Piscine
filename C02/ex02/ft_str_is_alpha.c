/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:25:26 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/11 23:22:28 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_symbol(char *s, int i, int *dif)
{
	if (!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')))
	{
		*dif = 0;
	}
}

int	ft_str_is_alpha(char *str)
{
	int	cont;
	int	dif;

	dif = 1;
	cont = 0;
	if (str[cont] == '\0')
	{
		return (1);
	}
	while (*(str + cont) != '\0')
	{
		ft_symbol(str, cont, &dif);
		cont++;
	}
	return (dif);
}
