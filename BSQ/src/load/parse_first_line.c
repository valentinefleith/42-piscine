/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_first_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:53:42 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/23 12:21:32 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "load.h"
#include "map.h"
#include <stdbool.h>

#define INVALID -1

static int	atoi_substring(char *start, char *end);
static bool	charset_is_valid(char *raw_charset);
static bool	is_printable(char c);
static void	fill_charset(char *raw_charset, t_charset *charset);

int	parse_first_line(char *buffer, t_charset *charset)
{
	int		line_count;
	int		line_length;
	bool	charset_validity;

	line_length = ft_strlen_custom(buffer, '\n');
	charset_validity = charset_is_valid(&buffer[line_length - CHARSET_LEN]);
	if (line_length <= CHARSET_LEN || !charset_validity)
		return (INVALID);
	fill_charset(&buffer[line_length - CHARSET_LEN], charset);
	line_count = atoi_substring(buffer, &buffer[line_length - CHARSET_LEN]);
	return (line_count);
}

static void	fill_charset(char *raw_charset, t_charset *charset)
{
	charset->empty = raw_charset[0];
	charset->obstacle = raw_charset[1];
	charset->full = raw_charset[2];
}

static int	atoi_substring(char *start, char *end)
{
	int	output;

	output = 0;
	while (start < end && *start)
	{
		if (!(*start >= '0' && *start <= '9'))
			return (INVALID);
		output = output * 10 + (*start - '0');
		start++;
	}
	return (output);
}

static bool	charset_is_valid(char *raw_charset)
{
	int	i;
	int	j;

	i = 0;
	while (raw_charset[i] && i < CHARSET_LEN)
	{
		j = 0;
		while (raw_charset[j] && j < CHARSET_LEN)
		{
			if (raw_charset[i] == raw_charset[j] && i != j)
				return (false);
			j++;
		}
		i++;
	}
	i = 0;
	while (raw_charset[i] && i < CHARSET_LEN)
	{
		if (!is_printable(raw_charset[i]))
			return (false);
		i++;
	}
	return (true);
}

static bool	is_printable(char c)
{
	return (c >= '!' && c <= '~');
}
