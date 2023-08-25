/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:14:56 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/19 18:59:48 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
/*
#include <stdio.h>

#define OK "ok :)"
#define FAIL "rip :("

void    put_int_array(int* array, int len) {
    for (int i = 0; i < len; i++) {
        printf("%i ", array[i]);
    }
    printf("\n");
}

void    test(int min, int max) {
    int* range;
    int size = ft_ultimate_range(&range, min, max);
    printf("attempting to create the range [%d; %d[\n", min, max);
    if (min >= max) {
        printf("size should be 0; actual value: %d\n", size);
        printf("range should be NULL; actual value: %p\n", range);
    }
    else {
        printf("created a array of size %d\n", size);
        printf("Here is the array created for interval [%d; %d[\n", min, max);
        put_int_array(range, size);
    }
    free(range);
    printf("\n");
}

int    main(void) {
    test(3, 4);
    test(42, 70);
    test(69, 42);
}
*/
