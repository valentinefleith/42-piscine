/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:01:03 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/11 13:49:48 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_unsigned_nbr(unsigned int nb)
{
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_put_unsigned_nbr(nb / 10);
		ft_put_unsigned_nbr(nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_put_unsigned_nbr(-nb);
	}
	else
		ft_put_unsigned_nbr(nb);
}
/*
int	main(void)
{
	ft_putnbr(12345);
}
*/
