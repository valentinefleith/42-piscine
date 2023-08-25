/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:44:56 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/23 16:10:40 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "map.h"
# include "square.h"
# include <unistd.h>

void	debug_print_map(t_map *map);
void	print_map(t_map *map);
void	print_charset(t_charset charset);
void	print_square(t_square square);
void	print_map_w_square(t_map *map, t_square square);

void	ft_putstr(const char *str);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);
void	ft_put_error_char(char c);
void	ft_put_error_str(const char *str);

#endif
