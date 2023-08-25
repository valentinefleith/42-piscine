/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:52:17 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/22 17:23:59 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H

# include "map.h"
# include "square.h"
# include <stdbool.h>

t_square	solve(t_map *map);
bool		square_fits(t_square square, t_map *map);
bool		square_is_in_map(t_square square, t_map *map);

#endif
