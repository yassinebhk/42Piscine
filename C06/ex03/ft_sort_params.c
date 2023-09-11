/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:24:36 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/20 02:37:03 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	diff = 0;
	while (*s1 == *s2 && *s1 != 0)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		diff = *s1 - *s2;
	return (diff);
}

void	ft_swap(char **argv, int i, int j)
{
	char	*c;

	c = argv[i];
	argv[i] = argv[j];
	argv[j] = c;
}

void	ft_putstr(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argc > 1)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		argc--;
		i++;
	}
}

void	ft_sort_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(argv, i, j);
			j++;
		}
		i++;
	}
	ft_putstr(argc, argv);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
	}
	return (0);
}
