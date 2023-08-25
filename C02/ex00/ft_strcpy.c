/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:25:21 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/04 13:52:27 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*cpy;

	cpy = dest;
	if (dest == 0 || src == 0)
		return (dest);
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (cpy);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*src;
	char	*dest;

	src = "hello";
	dest = malloc(6);
	ft_strcpy(dest, src);
	printf("src : %s\n", src);
	printf("dest : %s\n", dest);
	free(dest);
}
*/
