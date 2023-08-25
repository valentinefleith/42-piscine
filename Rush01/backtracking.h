/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armorsli <armorsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:53:36 by armorsli          #+#    #+#             */
/*   Updated: 2023/08/13 20:33:36 by armorsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BACKTRACKING_H
# define BACKTRACKING_H
# include <unistd.h>

void	backtrack(int grid[6][6], int pos);
int		check_colup(int grid[6][6]);
int		check_coldown(int grid[6][6]);
int		check_rowleft(int grid[6][6]);
int		check_rowright(int grid[6][6]);
int		check_views(int grid[6][6]);
int		check_pos(int grid[6][6], int x, int y, int nb);
int		next_pos(int pos);
int		check_0(int grid[6][6]);
int		check_40(int grid[6][6]);
void	fill_collup(int grid[6][6]);
void	fill_coldowm(int grid[6][6]);
void	fill_rowleft(int grid[6][6]);
void	fill_rowright(int grid[6][6]);
void	fill(int grid[6][6]);
void	ft_putchar(char c);
int		ft_strlen(char *str);
int		check_args(char *args);
void	init_table(int grid[6][6], char *args);
void	aff_grid(int grid[6][6]);
#endif
