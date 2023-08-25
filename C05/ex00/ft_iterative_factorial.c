/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:30:56 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/15 11:46:05 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	number;
	int	i;

	if (nb < 0)
		return (0);
	number = 1;
	i = 1;
	while (i <= nb)
	{
		number *= i;
		i++;
	}
	return (number);
}
/*
#include <stdio.h>

int	main(void)
{
	for (int i = -5; i <= 6; i++)
		printf("%d! = %d\n", i, ft_iterative_factorial(i));
}
*/
