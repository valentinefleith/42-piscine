/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:16:24 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/17 14:56:05 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	find_index_in_string(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
	{
		i++;
	}
	return (i);
}

bool	ft_char_is_in_str(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

bool	base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
		i++;
	if (i <= 1)
		return (false);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (false);
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

unsigned int	ft_unsigned_atoi_base(char *str, char *base)
{
	unsigned int	output;
	int				len_base;

	len_base = 0;
	while (base[len_base])
		len_base++;
	if (!*str)
		return (0);
	output = 0;
	while (ft_char_is_in_str(base, *str) && *str)
	{
		output = output * len_base + find_index_in_string(base, *str);
		str++;
	}
	return (output);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign_count;

	if (!base_is_valid(base))
		return (0);
	sign_count = 0;
	while (ft_char_is_in_str(" \f\n\r\t\v", *str))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign_count++;
		str++;
	}
	if (sign_count % 2 == 0)
		return (ft_unsigned_atoi_base(str, base));
	else
		return (ft_unsigned_atoi_base(str, base) * -1);
}
/*
#include <stdio.h>

void	test(char* input, char* base){
	printf("%s is %d in base %s\n", input, ft_atoi_base(input, base), base);
}
int	main(void)
{
	printf("%i\n", ft_atoi_base("CAFE", "0123456789ABCDEF"));
	if (ft_atoi_base("CAFE", "0123456789ABCDEF") == 51966)
		printf("ok :)\n");
	else
		printf("rip :(\n");
	test("2147483647", "0123456789");
	test("-2147483648", "0123456789");
}
*/
