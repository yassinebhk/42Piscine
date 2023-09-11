/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhaik <ybouhaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:31:39 by ybouhaik          #+#    #+#             */
/*   Updated: 2023/07/25 20:42:54 by ybouhaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_ALGORITHM_FUNCTIONS_H
# define BSQ_ALGORITHM_FUNCTIONS_H

# include "bsq.h"

struct s_param;
struct s_pos;

char	**fill_matrix(char **m, char *bff, int rc, struct s_param params);
struct s_pos	*put_obstacles(char **m, struct s_pos *obs, struct s_pos counter, struct s_param params);
void	calc_weight(char **m, struct s_pos *obs, struct s_pos counter, struct s_pos res_p, struct s_param params);
void	free_mat(char **matrix, struct s_pos *obs_dic, int rcnt);

#endif