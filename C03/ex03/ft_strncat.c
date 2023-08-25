/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:42:57 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/09 11:24:18 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (src == 0 || dest == 0)
		return (dest);
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 64

bool	is_same_string(char *my_result, char *libc_result)
{
	return (strcmp(my_result, libc_result) == 0);
}

void	test(char *dest, char *src, int i)
{
	char	destft[BUFFER_SIZE];
	char	dest_libc[BUFFER_SIZE];

	strcpy(destft, dest);
	strcpy(dest_libc, dest);
	strncat(dest_libc, src, i);
	ft_strncat(destft, src, i);
	printf("strncat : %s\n", dest_libc);
	printf("ft_strncat : %s\n", destft);
	if (is_same_string(destft, dest_libc))
	{
		printf("ok :)\n");
	}
	else
	{
		printf("rip :(\n");
	}
}

int	main(int argc, char *argv[])
{
	char	src[BUFFER_SIZE];
	char	dest[BUFFER_SIZE];

	if (argc != 4)
	{
		printf("Usage ./exec src dest number_of_bytes\n");
		return (0);
	}
	strcpy(dest, argv[1]);
	strcpy(src, argv[2]);
	test(dest, src, atoi(argv[3]));
}
*/
