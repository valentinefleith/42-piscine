/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:06:16 by poss              #+#    #+#             */
/*   Updated: 2023/08/23 17:49:25 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "load.h"
#include "map.h"
#include "print.h"
#include <fcntl.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 2147483648

/* allocate 2 GB */

static void	load_buffer_from_file(const char *path, char *buffer);
static void	load_buffer_from_stdin(char *buffer);

int	load_map(const char *path, t_map *map)
{
	char		*buffer;
	t_charset	charset;
	int			n_lines;
	int			map_status;

	buffer = malloc(BUFFER_SIZE);
	if (*path != '\0')
		load_buffer_from_file(path, buffer);
	else
		load_buffer_from_stdin(buffer);
	n_lines = parse_first_line(buffer, &charset);
	if (n_lines == -1)
	{
		free(buffer);
		return (FIRST_LINE_PARSE_ERROR);
	}
	map_status = parse_map(buffer, n_lines, charset, map);
	if (map_status != 0)
	{
		free(buffer);
		return (map_status);
	}
	free(buffer);
	return (LOAD_OK);
}

static void	load_buffer_from_file(const char *path, char *buffer)
{
	int	fd;

	fd = open(path, O_RDONLY);
	read(fd, buffer, BUFFER_SIZE);
	close(fd);
}

static void	load_buffer_from_stdin(char *buffer)
{
	while (read(0, buffer, 1) > 0)
	{
		buffer++;
	}
	*buffer = '\0';
}
