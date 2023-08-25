/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:34:10 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/06 18:21:59 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (true);
	return (false);
}

char	to_lower(char c)
{
	return (c + 32);
}

char	*ft_strlowcase(char *str)
{
	char	*cpy;

	if (str == 0)
		return (str);
	cpy = str;
	while (*cpy)
	{
		if (is_uppercase(*cpy))
		{
			*cpy = to_lower(*cpy);
		}
		cpy++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[];

	str[] = "bonJOUR34";
	printf("%s\n", ft_strlowcase(str));
}
*/
