/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armorsli <armorsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:49:19 by armorsli          #+#    #+#             */
/*   Updated: 2023/08/13 20:34:09 by armorsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "backtracking.h"

int	check_pos(int grid[6][6], int x, int y, int nb)
{
	int	i;
	int	cpt;

	cpt = 0;
	i = 1;
	while (i <= 4)
	{
		if (grid[y][i] == nb)
			cpt++;
		i++;
	}
	i = 1;
	while (i <= 4)
	{
		if (grid[i][x] == nb)
			cpt++;
		i++;
	}
	if (cpt > 2)
		return (0);
	return (1);
}

int	next_pos(int pos)
{
	if ((pos == 10) || (pos == 16) || (pos == 22))
		pos += 3;
	else
		pos++;
	if (pos == 29)
		return (99);
	return (pos);
}

int	check_40(int grid[6][6])
{
	int	i;
	int	j;
	int	count;

	i = 1;
	count = 0;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			count += grid[i][j];
			j++;
		}
		i++;
	}
	if (count != 40)
		return (0);
	return (1);
}

int	check_0(int grid[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			if (grid[i][j] == 0)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
