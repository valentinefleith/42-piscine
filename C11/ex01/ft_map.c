/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <vafleith@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:54:43 by vafleith          #+#    #+#             */
/*   Updated: 2023/11/01 11:04:21 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*return_values;
	int	i;

	return_values = malloc(length);
	if (return_values == NULL)
		return (tab);
	i = 0;
	while (i < length)
	{
		return_values[i] = (*f)(tab[i]);
		i++;
	}
	return (return_values);
}

/*
#include <stdio.h>

static int	triple(int a)
{
	return (a * 3);
}

int	main(void)
{
	int	*triples;

	int tab[] = {1, 2, 3, 4};
	triples = ft_map(tab, 4, &triple);
	for (int i = 0; i < 4; i++)
	{
		printf("%i\n", triples[i]);
	}
}
*/
