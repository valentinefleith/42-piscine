/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:55:26 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/23 12:17:07 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "solve.h"
#include "square.h"

static bool	fits_better(t_square candidate, t_square bsq);

t_square	solve(t_map *map)
{
	t_square	bsq;
	t_square	candidate;

	bsq = get_square(-1, -1, -1);
	candidate.x = 0;
	while (candidate.x < map->width)
	{
		candidate.y = 0;
		while (candidate.y < map->height)
		{
			candidate.size = 1;
			while (square_fits(candidate, map))
				candidate.size++;
			candidate.size--;
			if (fits_better(candidate, bsq))
				bsq = candidate;
			candidate.y++;
		}
		candidate.x++;
	}
	return (bsq);
}

/**
 * return true if they are literally the same
 * shouldnt happen tho
 */
static bool	fits_better(t_square candidate, t_square bsq)
{
	if (candidate.size == 0)
		return (false);
	if (candidate.size != bsq.size)
		return (candidate.size > bsq.size);
	if (candidate.y != bsq.y)
		return (candidate.y < bsq.y);
	if (candidate.x != bsq.x)
		return (candidate.x < bsq.x);
	return (true);
}
