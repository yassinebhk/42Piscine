/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:49:55 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/22 22:50:06 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont + 1);
}

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
		cont++;
	}
	*(dest + cont) = letter;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = (char *)malloc(ft_strlen(src) * sizeof(char));
	if (str == NULL)
		return (0);
	str = ft_strcpy(str, src);
	return (str);
}
// int main (){
//     char *p;
//     char *s = (char *) malloc (sizeof(char));
//     char *q;

//     p = ft_strdup(s);
//     q = strdup (s);
//     printf ("%p", p);
//     printf ("\n%p", q);
// }
// #include <stdio.h>
// #include <string.h>
// #include <string.h>
// #include <assert.h>
// #include <stdlib.h>

// int main(void)
// {
//     char *s1 = "String";
//     char *s2 = ft_strdup(s1);
//     assert(strcmp(s1, s2) == 0);
//     printf ("%s %p", s2, s2);
//     char *s3 = strdup(s1);
//     assert(strcmp(s1, s3) == 0);
//     printf ("\n%s %p", s3, s3);
//     //free(s2);
// }
