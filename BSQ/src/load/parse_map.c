/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:53:35 by poss              #+#    #+#             */
/*   Updated: 2023/08/23 15:36:48 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "load.h"
#include "map.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static int	parse_row(char *buffer, int row_index, t_map *map);
static char	*get_nth_row(char *buffer, int row_index, int height);
static bool	is_valid_map_char(char c, t_charset charset);

int	parse_map(char *buffer, int n_lines, t_charset charset, t_map *map)
{
	int	row_index;

	while (*buffer != '\n')
		buffer++;
	buffer++;
	map->charset = charset;
	map->height = n_lines;
	map->width = ft_strlen_custom(buffer, '\n');
	if (map->width == 0)
		return (MAP_ERROR_NO_ALLOCATION);
	map->data = allocate_matrix(map->width, map->height);
	row_index = 0;
	while (row_index < map->height)
	{
		if (parse_row(buffer, row_index, map) == INVALID)
			return (INVALID);
		row_index++;
	}
	return (OK);
}

static int	parse_row(char *buffer, int row_index, t_map *map)
{
	char	*row;
	int		char_count;
	int		i;

	row = get_nth_row(buffer, row_index, map->height);
	char_count = 0;
	i = 0;
	while (row[i] != '\n')
	{
		if (row[i] == EOF)
			return (INVALID);
		if (!is_valid_map_char(row[i], map->charset))
			return (INVALID);
		char_count++;
		(map->data)[row_index][i] = row[i];
		i++;
	}
	if (char_count != map->width)
		return (INVALID);
	return (OK);
}

static char	*get_nth_row(char *buffer, int row_index, int height)
{
	int	i;

	i = 0;
	while (i < row_index)
	{
		while (*buffer != '\n')
			buffer++;
		if (i != height - 1)
			buffer++;
		i++;
	}
	return (buffer);
}

static bool	is_valid_map_char(char c, t_charset charset)
{
	return (c == charset.empty || c == charset.obstacle);
}
