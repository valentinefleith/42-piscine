/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:51:38 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/21 16:55:24 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include <unistd.h>

void	ft_putstr(const char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
