/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:05:18 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/11 13:47:50 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

bool	is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t')
		return (true);
	if (c == '\v')
		return (true);
	return (false);
}

int	ft_unsigned_atoi(char *str)
{
	int	output;

	if (!*str)
		return (0);
	output = 0;
	while (is_number(*str) && *str)
	{
		output = output * 10 + (*str - '0');
		str++;
	}
	return (output);
}

int	ft_atoi(char *str)
{
	int	sign_count;

	sign_count = 0;
	while (is_space(*str))
	{
		str++;
	}
	while ((*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign_count++;
		str++;
	}
	if (sign_count % 2 == 0)
	{
		return (ft_unsigned_atoi(str));
	}
	else
	{
		return (ft_unsigned_atoi(str) * -1);
	}
}
/*
#include <stdio.h>

int	main(void)
{

	char nbr_str[] = "    ---+--+1234ab567";
	printf("%i\n", ft_atoi(nbr_str));
}
*/
