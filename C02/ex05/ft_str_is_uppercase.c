/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:38:06 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/06 18:15:12 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_not_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (false);
	return (true);
}

int	ft_str_is_uppercase(char *str)
{
	if (str == 0)
		return (true);
	while (*str != '\0')
	{
		if (is_not_uppercase(*str))
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

	str = "HELLO";
	printf("%i\n", ft_str_is_uppercase(str));
}
*/
