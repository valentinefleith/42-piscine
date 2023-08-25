/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:50:05 by poss              #+#    #+#             */
/*   Updated: 2023/08/23 15:37:17 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOAD_H
# define LOAD_H

# include "map.h"

# define CHARSET_LEN 3

# define OK 0
# define INVALID -1

# define LOAD_OK 0
# define FIRST_LINE_PARSE_ERROR 1
# define MAP_PARSE_ERROR 2
# define MAP_ERROR_NO_ALLOCATION 3

int	load_map(const char *path, t_map *map);
int	parse_first_line(char *buffer, t_charset *charset);
int	parse_map(char *buffer, int n_lines, t_charset charset, t_map *map);

#endif /* LOAD_H */
