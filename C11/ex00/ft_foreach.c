/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:42:06 by vafleith          #+#    #+#             */
/*   Updated: 2023/11/01 10:52:56 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*

#include <unistd.h>

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


#include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	ft_foreach(tab, 5, &ft_putnbr);
}
*/
