/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:38:06 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/06 18:17:01 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_not_printable(char c)
{
	if (c >= 31 && c != 127)
		return (false);
	return (true);
}

int	ft_str_is_printable(char *str)
{
	if (str == 0)
		return (true);
	while (*str != '\0')
	{
		if (is_not_printable(*str))
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

	char str[] = "hello";
	printf("%i\n", ft_str_is_printable(str));
}
*/
