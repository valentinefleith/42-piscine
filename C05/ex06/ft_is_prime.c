/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:01:22 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/15 11:49:00 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INT_MAX_SQRT 46340

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb && i <= INT_MAX_SQRT)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 0;
	while (nb <= 1000000)
	{
		if (ft_is_prime(nb))
			printf("%i\n", nb);
		nb++;
	}
}
*/
