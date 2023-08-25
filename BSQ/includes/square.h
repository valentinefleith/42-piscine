/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:49:50 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/23 16:13:08 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_H
# define SQUARE_H

# include <stdbool.h>

typedef struct s_square
{
	int		x;
	int		y;
	int		size;
}			t_square;

t_square	get_square(int x, int y, int size);
bool		square_is_valid(t_square square);
bool		is_in_square(int row_index, int col_index, t_square square);

#endif
