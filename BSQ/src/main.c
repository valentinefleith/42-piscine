/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:44:27 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/23 16:08:45 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "load.h"
#include "map.h"
#include "print.h"
#include "solve.h"
#include "square.h"

#define PATH_SIZE 256

static void	process_map(const char *path);

int	main(int argc, char **argv)
{
	int	argv_index;

	argv_index = 1;
	if (argc == 1)
	{
		process_map("");
		return (0);
	}
	while (argv_index < argc)
	{
		process_map(argv[argv_index]);
		argv_index++;
	}
}

static void	process_map(const char *path)
{
	int			load_status;
	t_map		map;
	t_square	solution;

	load_status = load_map(path, &map);
	if (load_status == FIRST_LINE_PARSE_ERROR
		|| load_status == MAP_ERROR_NO_ALLOCATION || load_status == INVALID)
	{
		ft_put_error_str("map error\n");
		return ;
	}
	if (load_status == MAP_PARSE_ERROR)
	{
		ft_put_error_str("map error\n");
	}
	if (load_status == LOAD_OK)
	{
		solution = solve(&map);
		if (!square_is_valid(solution))
			ft_put_error_str("map error\n");
		else
			print_map_w_square(&map, solution);
	}
	free_matrix(map.data, map.height);
}
