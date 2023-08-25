/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:38:06 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/06 18:13:19 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_not_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (false);
	return (true);
}

int	ft_str_is_alpha(char *str)
{
	if (str == 0)
		return (true);
	while (*str != '\0')
	{
		if (is_not_alpha(*str))
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

	str = "hello";
	printf("%i\n", ft_str_is_alpha(str));
}
*/
