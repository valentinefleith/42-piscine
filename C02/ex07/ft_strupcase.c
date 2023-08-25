/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:34:10 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/06 18:18:46 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (true);
	return (false);
}

char	to_upper(char c)
{
	return (c - 32);
}

char	*ft_strupcase(char *str)
{
	char	*cpy;

	if (str == 0)
		return (str);
	cpy = str;
	while (*cpy)
	{
		if (is_lowercase(*cpy))
		{
			*cpy = to_upper(*cpy);
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

	str[] = "bonJ38our";
	printf("%s\n", ft_strupcase(str));
}
*/
