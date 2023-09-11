/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:43:18 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/13 12:25:00 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_up(char *str, int cont)
{
	int	up;

	up = 0;
	if (*(str + cont) >= 'a' && *(str + cont) <= 'z')
	{
		up = 0;
	}
	else if (*(str + cont) >= 'A' && *(str + cont) <= 'Z')
	{
		up = 0;
	}
	else if (*(str + cont) >= '0' && *(str + cont) <= '9')
	{
		up = 0;
	}
	else
	{
		up = 1;
	}
	return (up);
}

void	up_ini(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	cont;
	int	up;

	cont = 1;
	up_ini(str);
	while (*(str + cont) != '\0')
	{
		up = ft_is_up(str, cont - 1);
		if (*(str + cont) >= 'A' && *(str + cont) <= 'Z' && up == 0)
		{
			*(str + cont) = *(str + cont) + 32;
		}
		else if (*(str + cont) >= 'A' && *(str + cont) <= 'Z' && up == 1)
		{
			up = 0;
		}
		else if (*(str + cont) >= 'a' && *(str + cont) <= 'z' && up == 1)
		{
			*(str + cont) = *(str + cont) - 32;
			up = 0;
		}
		cont++;
	}
	return (str);
}
