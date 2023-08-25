/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armorsli <armorsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:37:58 by armorsli          #+#    #+#             */
/*   Updated: 2023/08/13 20:34:19 by armorsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "backtracking.h"

void	backtrack(int grid[6][6], int pos)
{
	int	y;
	int	x;
	int	nb;

	y = pos / 6;
	x = pos % 6;
	if (pos == 99)
		return ;
	if (grid[y][x] != 0)
		backtrack(grid, next_pos(pos));
	else
	{
		nb = 1;
		while (nb <= 4)
		{
			grid[y][x] = nb;
			if ((check_pos(grid, x, y, nb) == 1) && (pos != 99))
				backtrack(grid, next_pos(pos));
			if (check_views(grid) == 1)
				return ;
			nb++;
		}
		grid[y][x] = 0;
	}
}
