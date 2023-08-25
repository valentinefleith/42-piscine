/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:27:45 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/23 12:19:15 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "square.h"

t_square	get_square(int x, int y, int size)
{
	t_square	out;

	out.x = x;
	out.y = y;
	out.size = size;
	return (out);
}

bool	is_in_square(int row_index, int col_index, t_square square)
{
	bool	col_is_in;
	bool	row_is_in;

	col_is_in = (col_index >= square.x && col_index < square.x + square.size);
	row_is_in = (row_index >= square.y && row_index < square.y + square.size);
	return (col_is_in && row_is_in);
}

bool	square_is_valid(t_square square)
{
	return (square.x >= 0 && square.y >= 0 && square.size >= 1);
}
