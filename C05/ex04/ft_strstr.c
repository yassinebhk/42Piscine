/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:33:58 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/17 22:34:03 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[100] = "olapalpaco";
	char src[100] = "paco";

	char *p = strstr(dest, src);
	printf("Primera letra: %p",p);

	p = ft_strstr(dest, src);
	printf("\nPrimera letra: %p", p);
	printf("\n");
	return (0);
}*/
