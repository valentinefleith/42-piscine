/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:43:29 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/23 11:26:27 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include <stdlib.h>

static void	free_up_to(char **matrix, int index);

char	**allocate_matrix(int width, int height)
{
	char	**matrix;
	int		row_index;

	matrix = malloc(height * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	row_index = 0;
	while (row_index < height)
	{
		matrix[row_index] = malloc(width);
		if (matrix[row_index] == NULL)
		{
			free_up_to(matrix, row_index);
			return (NULL);
		}
		row_index++;
	}
	return (matrix);
}

void	free_matrix(char **matrix, int height)
{
	free_up_to(matrix, height);
}

static void	free_up_to(char **matrix, int index)
{
	int	i;

	i = 0;
	if (matrix == NULL)
		return ;
	while (i < index)
	{
		if (matrix[i] == NULL)
			continue ;
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
