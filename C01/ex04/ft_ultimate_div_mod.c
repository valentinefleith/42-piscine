/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:36:01 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/03 14:02:04 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	if (a == 0 || b == 0)
		return ;
	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	div;
	int	mod;
	int	*a;
	int	*b;

	div = 13;
	mod = 5;
	a = &div;
	b = &mod;
	ft_ultimate_div_mod(a, b);
	printf("a = %i, b = %i\n", *a, *b);
}
*/
