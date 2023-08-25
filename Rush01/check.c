/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armorsli <armorsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:43:39 by armorsli          #+#    #+#             */
/*   Updated: 2023/08/13 21:56:40 by armorsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "backtracking.h"

int	check_colup(int grid[6][6])
{
	int	i;
	int	j;
	int	cnt;
	int	min;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		cnt = 0;
		min = 0;
		while (j <= 4)
		{
			if (grid[j][i] > min)
			{
				min = grid[j][i];
				cnt += 1;
			}
			j++;
		}
		if (cnt != grid[0][i])
			return (0);
		i++;
	}
	return (1);
}

int	check_coldown(int grid[6][6])
{
	int	i;
	int	j;
	int	cnt;
	int	min;

	i = 1;
	while (i <= 4)
	{
		j = 4;
		cnt = 0;
		min = 0;
		while (j >= 1)
		{
			if (grid[j][i] > min)
			{
				min = grid[j][i];
				cnt += 1;
			}
			j--;
		}
		if (cnt != grid[5][i])
			return (0);
		i++;
	}
	return (1);
}

int	check_rowleft(int grid[6][6])
{
	int	i;
	int	j;
	int	cnt;
	int	min;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		cnt = 0;
		min = 0;
		while (j <= 4)
		{
			if (grid[i][j] > min)
			{
				min = grid[i][j];
				cnt += 1;
			}
			j++;
		}
		if (cnt != grid[i][0])
			return (0);
		i++;
	}
	return (1);
}

int	check_rowright(int grid[6][6])
{
	int	i;
	int	j;
	int	cnt;
	int	min;

	i = 1;
	while (i <= 4)
	{
		j = 4;
		cnt = 0;
		min = 0;
		while (j >= 1)
		{
			if (grid[i][j] > min)
			{
				min = grid[i][j];
				cnt += 1;
			}
			j--;
		}
		if (cnt != grid[i][5])
			return (0);
		i++;
	}
	return (1);
}

int	check_views(int grid[6][6])
{
	if (check_colup(grid) && check_coldown(grid) && check_rowleft(grid)
		&& check_rowright(grid) && check_0(grid) && check_40(grid))
		return (1);
	return (0);
}
