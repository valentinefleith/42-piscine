/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:17:27 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/03 16:15:07 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	if (tab == 0)
		return ;
	i = 0;
	while (i < size / 2)
	{
		swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	tab[];
	int	size;

	tab[] = {1, 2, 3, 4, 5};
	size = sizeof(tab) / sizeof(tab[0]);
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%i, ", tab[i]);
	}
	printf("\n");
}
*/
