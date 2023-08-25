/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armorsli <armorsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:50:20 by armorsli          #+#    #+#             */
/*   Updated: 2023/08/13 20:36:32 by armorsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "backtracking.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_args(char *args)
{
	int	i;

	i = 0;
	if (args[i] >= '1' && args[i] <= '4')
		i += 2;
	if (ft_strlen(args) != 31)
		return (0);
	while (i < 32)
	{
		if ((args[i] >= '1' && args[i] <= '4') && args[i - 1] == ' ')
			i += 2;
		else
			return (0);
	}
	return (1);
}

void	init_table(int grid[6][6], char *args)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (args[j])
	{
		if (j >= 0 && j <= 6)
			grid[0][i] = args[j] - 48;
		else if (j >= 8 && j <= 14)
			grid[5][i] = args[j] - 48;
		else if (j >= 16 && j <= 22)
			grid[i][0] = args[j] - 48;
		else if (j >= 24 && j <= 30)
			grid[i][5] = args[j] - 48;
		j += 2;
		if (i == 4)
			i = 1;
		else
			i++;
	}
}

void	aff_grid(int grid[6][6])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			ft_putchar(grid[i][j] + 48);
			if (j < 4)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
