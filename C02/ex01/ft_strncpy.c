/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:25:35 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/16 13:47:04 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	cnt;

	cnt = -1;
	while ((unsigned)++cnt < n && src[cnt] != '\0')
		dest[cnt] = src[cnt];
	while ((unsigned)cnt < n)
		dest[cnt++] = '\0';
	return (dest);
}
