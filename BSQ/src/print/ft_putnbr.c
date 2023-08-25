/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:32:25 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/21 17:03:33 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include <unistd.h>

static void	ft_put_unsignednbr(unsigned int nb);

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		ft_put_unsignednbr(nb);
	}
	else
	{
		ft_putchar('-');
		ft_put_unsignednbr(-nb);
	}
}

static void	ft_put_unsignednbr(unsigned int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_put_unsignednbr(nb / 10);
		ft_put_unsignednbr(nb % 10);
	}
}
