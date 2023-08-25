/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armorsli <armorsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:52:12 by armorsli          #+#    #+#             */
/*   Updated: 2023/08/13 22:04:14 by armorsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "backtracking.h"

int	main(int argc, char **argv)
{
	static int	grid[6][6] = {0};
	int			pos;

	pos = 7;
	if (argc == 2)
	{
		if (check_args(argv[1]) == 1)
		{
			init_table(grid, argv[1]);
			fill(grid);
			backtrack(grid, pos);
			if (check_views(grid) == 1)
			{
				aff_grid(grid);
				return (0);
			}
			else
				write(2, "Error\n", 6);
		}
		else
			write(2, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}
