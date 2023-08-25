/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:53:12 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/15 11:48:36 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SQRT_INT_MAX 46341

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 0;
	while (i < SQRT_INT_MAX)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	for (int i = -5; i <= 50; i++)
		printf("sqrt(%i) = %i\n", i, ft_sqrt(i));
}
*/
