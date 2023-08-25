/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:05:12 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/24 13:34:50 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_put_stock_str(t_stock_str stock_str);
void	ft_putnbr(int nbr);
void	ft_putunsigned(unsigned int nbr);
void	ft_putstr(char *str);

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
		ft_put_stock_str(*par++);
}

void	ft_put_stock_str(t_stock_str stock_str)
{
	ft_putstr(stock_str.str);
	ft_putstr("\n");
	ft_putnbr(stock_str.size);
	ft_putstr("\n");
	ft_putstr(stock_str.copy);
	ft_putstr("\n");
}

void	ft_putnbr(int nbr)
{
	unsigned int	absolute_value;

	if (nbr >= 0)
		absolute_value = nbr;
	else
	{
		write(1, "-", 1);
		absolute_value = -nbr;
	}
	ft_putunsigned(absolute_value);
}

void	ft_putunsigned(unsigned int nbr)
{
	char	digit;

	if (nbr < 10)
	{
		digit = nbr + '0';
		write(1, &digit, 1);
	}
	else
	{
		ft_putunsigned(nbr / 10);
		ft_putunsigned(nbr % 10);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
