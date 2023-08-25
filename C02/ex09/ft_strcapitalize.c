/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:03:13 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/07 10:52:21 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_separator(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
		return (0);
	if (c >= 'a' && c <= 'z')
		return (0);
	return (1);
}

char	capitalize(char c)
{
	if (is_lowercase(c))
		return (c - 32);
	return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	char	*cpy;
	int		to_capitalize;

	if (str == 0)
		return (str);
	cpy = str;
	to_capitalize = 1;
	while (*cpy)
	{
		if (to_capitalize == 0)
				*cpy = to_lower(*cpy);
		else
		{
			*cpy = capitalize(*cpy);
			to_capitalize = 0;
		}
		if (is_separator(*cpy))
				to_capitalize = 1;
		cpy++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 128

int	main(void)
{
	char	str[BUFFER_SIZE];

	strcpy(str,
			"salut, "
			"comment tU vas ? 42mots quArante-deux; cinquante+et+un");
	printf("%s\n", ft_strcapitalize(str));
}
*/
