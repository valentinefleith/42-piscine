/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:42:57 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/08 13:41:20 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*cpy;

	if (src == 0 || dest == 0)
		return (dest);
	cpy = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (cpy);
}
/*
#include <stdio.h>
#include <string.h>
//#define BUFFER_SIZE 64

int	main(void)
{
	char dest[4] = "hel";
	char src[] = "hello";
	printf("%s\n", strcat(dest, src));
	//printf("%s\n", ft_strcat(dest, src));
}
*/
