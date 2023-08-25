/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:38:06 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/07 10:45:22 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_not_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (false);
	return (true);
}

int	ft_str_is_lowercase(char *str)
{
	if (str == 0)
		return (true);
	while (*str != '\0')
	{
		if (is_not_lowercase(*str))
		{
			return (false);
		}
		str++;
	}
	return (true);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "heLllo";
	printf("%i\n", ft_str_is_lowercase(str));
}
*/
