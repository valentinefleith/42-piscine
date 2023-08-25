/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:16:53 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/03 17:42:30 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap_counter;
	int	i;

	if (tab == 0)
		return ;
	swap_counter = 1;
	while (swap_counter > 0)
	{
		swap_counter = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap(&tab[i], &tab[i + 1]);
				swap_counter++;
			}
			i++;
		}
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	size;
	int	tab[];

	tab[] = {8, 1, 2, 7, 5, 6, 4};
	size = sizeof(tab) / sizeof(tab[0]);
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%i ", tab[i]);
	}
	printf("\n");
}
*/
