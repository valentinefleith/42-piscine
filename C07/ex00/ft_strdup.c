/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:05:29 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/19 18:28:42 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*cpy;

	cpy = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (cpy);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;

	duplicate = malloc(ft_strlen(src) + 1);
	if (duplicate == NULL)
		return (duplicate);
	ft_strcpy(duplicate, src);
	return (duplicate);
}
/*
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 64

int	main(void) {
	char src[BUFFER_SIZE];
	char* dest;

	strcpy(src, "Bonjour lol what up\n");
	dest = ft_strdup(src);
	printf("%s", dest);
	free(dest);
}
*/
