/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:51:32 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/02 19:25:04 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_separator(char hundreds, char tens, char units)
{
	if (!(hundreds == '7' && tens == '8' && units == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	units;

	hundreds = '0';
	while (hundreds <= '9')
	{
		tens = hundreds + 1;
		while (tens <= '9')
		{
			units = tens + 1;
			while (units <= '9')
			{
				ft_putchar(hundreds);
				ft_putchar(tens);
				ft_putchar(units);
				print_separator(hundreds, tens, units);
				units++;
			}
			tens++;
		}
		hundreds++;
	}
}
