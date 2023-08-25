/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:38:06 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/06 18:12:46 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_not_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (false);
	return (true);
}

int	ft_str_is_numeric(char *str)
{
	if (str == 0)
		return (true);
	while (*str != '\0')
	{
		if (is_not_numeric(*str))
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

	str = "2870079";
	printf("%i\n", ft_str_is_numeric(str));
}
*/
