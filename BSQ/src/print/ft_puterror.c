/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:33:34 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/23 16:10:13 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include <unistd.h>

void	ft_put_error_char(char c)
{
	write(2, &c, 1);
}

void	ft_put_error_str(const char *str)
{
	while (*str)
	{
		ft_put_error_char(*str);
		str++;
	}
}
