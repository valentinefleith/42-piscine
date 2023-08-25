/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:58:34 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/07 18:42:45 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (dest == 0 || src == 0)
		return (ft_strlen(src));
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#define BUFFER_SIZE 64

int	main(void)
{
	char	dest[BUFFER_SIZE];

	char	src[]= "hello";
	printf("%i\n", ft_strlcpy(dest, src, BUFFER_SIZE));
	printf("%s\n", dest);
}
*/
