/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:55:26 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/22 19:34:08 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "solve.h"
#include "square.h"

bool	square_fits(t_square square, t_map *map)
{
	int	column;
	int	row;

	if (!square_is_valid(square) || !square_is_in_map(square, map))
		return (false);
	column = square.x;
	while (column < square.x + square.size)
	{
		row = square.y;
		while (row < square.y + square.size)
		{
			if ((map->data)[row][column] == (map->charset).obstacle)
				return (false);
			row++;
		}
		column++;
	}
	return (true);
}

bool	square_is_in_map(t_square square, t_map *map)
{
	bool	x_fits;
	bool	y_fits;

	x_fits = square.x + square.size <= map->width;
	y_fits = square.y + square.size <= map->height;
	return (x_fits && y_fits);
}
