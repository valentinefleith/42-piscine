/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armorsli <armorsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:49:49 by armorsli          #+#    #+#             */
/*   Updated: 2023/08/13 20:34:04 by armorsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "backtracking.h"

void	fill_colup(int grid[6][6])
{
	static int	i;
	static int	j;

	i = 1;
	j = 1;
	while (i <= 4)
	{
		j = 1;
		if (grid[0][i] == 1)
			grid[1][i] = 4;
		if (grid[0][i] == 4)
		{
			while (j <= 4)
			{
				grid[j][i] = j;
				j++;
			}
		}
		i++;
	}
}

void	fill_coldown(int grid[6][6])
{
	static int	i;
	static int	j;
	int			count;

	i = 1;
	j = 4;
	while (i <= 4)
	{
		count = 0;
		j = 4;
		if (grid[5][i] == 1)
			grid[4][i] = 4;
		if (grid[5][i] == 4)
		{
			while (j >= 1)
			{
				grid[j][i] = count;
				j--;
				count++;
			}
		}
		i++;
	}
}

void	fill_rowleft(int grid[6][6])
{
	static int	i;
	static int	j;

	i = 1;
	j = 1;
	while (i <= 4)
	{
		j = 1;
		if (grid[i][0] == 1)
			grid[i][1] = 4;
		if (grid[i][0] == 4)
		{
			while (j <= 4)
			{
				grid[i][j] = j;
				j++;
			}
		}
		i++;
	}
}

void	fill_rowright(int grid[6][6])
{
	static int	i;
	static int	j;
	int			count;

	i = 1;
	j = 4;
	while (i <= 4)
	{
		count = 1;
		j = 4;
		if (grid[i][5] == 1)
			grid[i][4] = 4;
		if (grid[i][5] == 4)
		{
			while (j >= 1)
			{
				grid[i][j] = count;
				j--;
				count++;
			}
		}
		i++;
	}
}

void	fill(int grid[6][6])
{
	fill_colup(grid);
	fill_coldown(grid);
	fill_rowleft(grid);
	fill_rowright(grid);
}
