/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:21:40 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/03 14:01:04 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (div == 0 || mod == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	d;
	int	m;
	int	*div;
	int	*mod;

	a = 20;
	b = 4;
	d = 0;
	m = 0;
	div = &d;
	mod = &m;
	ft_div_mod(a, b, div, mod);
	printf("div = %i, mod = %i\n", *div, *mod);
}
*/
