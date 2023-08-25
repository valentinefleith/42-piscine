/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:47:10 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/23 11:16:56 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "print.h"
#include "solve.h"
#include "square.h"

void	debug_print_map(t_map *map)
{
	ft_putstr("\n");
	print_charset(map->charset);
	ft_putstr("width:\t");
	ft_putnbr(map->width);
	ft_putstr("\n");
	ft_putstr("height:\t");
	ft_putnbr(map->height);
	ft_putstr("\n");
	print_map(map);
}

void	print_map(t_map *map)
{
	int	row_index;
	int	col_index;

	row_index = 0;
	while (row_index < map->height)
	{
		col_index = 0;
		while (col_index < map->width)
		{
			ft_putchar((map->data)[row_index][col_index]);
			col_index++;
		}
		row_index++;
		ft_putstr("\n");
	}
}

void	print_map_w_square(t_map *map, t_square square)
{
	int		row_index;
	int		col_index;
	char	char_to_print;

	if (!square_fits(square, map))
	{
		ft_putstr("Error. Square does not fit in the map.\n");
		return ;
	}
	row_index = 0;
	while (row_index < map->height)
	{
		col_index = 0;
		while (col_index < map->width)
		{
			char_to_print = (map->data)[row_index][col_index];
			if (is_in_square(row_index, col_index, square))
				ft_putchar((map->charset.full));
			else
				ft_putchar(char_to_print);
			col_index++;
		}
		row_index++;
		ft_putstr("\n");
	}
}

void	print_charset(t_charset charset)
{
	ft_putstr("Charset:\n");
	ft_putstr("obst:\t");
	ft_putchar(charset.obstacle);
	ft_putstr("\n");
	ft_putstr("empty:\t");
	ft_putchar(charset.empty);
	ft_putstr("\n");
	ft_putstr("full:\t");
	ft_putchar(charset.full);
	ft_putstr("\n");
}
