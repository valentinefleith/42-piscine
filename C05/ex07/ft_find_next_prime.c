/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:01:22 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/15 11:49:36 by vafleith         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char** argv)
{
	int	nbr;

	if (argc != 2) {
		printf("usage ./exec nbr\n");
		return (1);
	}
	nbr = atoi(argv[1]);
	printf("next prime after %d is %d\n", nbr, ft_find_next_prime(nbr));
}
*/
