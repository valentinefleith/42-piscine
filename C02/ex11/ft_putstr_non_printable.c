/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:10:51 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/08 16:21:10 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	is_non_printable(char c)
{
	if (c <= 31 || c == 127)
		return (true);
	return (false);
}

void	putchar_in_hexa(unsigned char c)
{
	ft_putchar('\\');
	if (c / 16 < 10)
		ft_putchar(c / 16 + '0');
	else
		ft_putchar(c / 16 + 'a' - 10);
	if (c % 16 < 10)
	{
		ft_putchar(c % 16 + '0');
	}
	else
	{
		ft_putchar(c % 16 - 10 + 'a');
	}
}

void	ft_putstr_non_printable(char *str)
{
	if (str == 0)
		return ;
	while (*str)
	{
		if (is_non_printable(*str))
		{
			putchar_in_hexa(*str);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
/*
int	main(void)
{

	char hello[] = "Coucou\f\n\atu vas bien ?";
	//hello[5] = '\f';
	ft_putstr_non_printable(hello);
}
*/
