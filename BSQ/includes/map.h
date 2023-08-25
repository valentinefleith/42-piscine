/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:37:46 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/21 15:38:54 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct s_charset
{
	char		empty;
	char		obstacle;
	char		full;
}				t_charset;

typedef struct s_map
{
	char		**data;
	int			height;
	int			width;
	t_charset	charset;
}				t_map;

char			**allocate_matrix(int width, int height);
void			free_matrix(char **matrix, int height);

#endif /* MAP_H */
