/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:14:56 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/20 12:28:43 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	while (min + i < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

void	put_int_array(int* array, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", array[i]);
	}
}
void test(int min, int max)
{
	int* range = ft_range(min, max);

	printf("trying to create range between %d and %d\n", min, max);
	if (min >= max)
	{
		printf("%d plus grand que %d ft_range devrait return NULL\n", min, max);
		printf("ft_range return %p\n", range);
	}
	else {
		if (range == NULL)
		{
			printf("rip :( ft_range returned a NULL\n");
		}
		else {
		put_int_array(range, max - min);
		}
	}
	printf("\n");

}

int	main(void)
{
	test(-3, 4);
	test(42, 70);
	test(69, 42);
	test(2147483578, 2147483647);
}
*/
