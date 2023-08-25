/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:26 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/22 16:37:07 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "square.h"

void	print_square(t_square square)
{
	ft_putstr("Square:\n");
	ft_putstr("\tx:\t");
	ft_putnbr(square.x);
	ft_putstr("\n\ty:\t");
	ft_putnbr(square.y);
	ft_putstr("\n\tsize:\t");
	ft_putnbr(square.size);
	ft_putstr("\n");
}
