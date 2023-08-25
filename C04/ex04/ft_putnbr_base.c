/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:01:12 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/13 13:34:34 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

bool	base_is_valid(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (false);
	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (false);
			if (base[i] == '+' || base[i] == '-')
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

void	ft_put_unsigned_nbr_base(unsigned int nbr, char *base)
{
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (nbr < base_len)
		ft_putchar(base[nbr]);
	else
	{
		ft_put_unsigned_nbr_base(nbr / base_len, base);
		ft_put_unsigned_nbr_base(nbr % base_len, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	absolute_value;

	if (!base_is_valid(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		absolute_value = -nbr;
	}
	else
		absolute_value = nbr;
	ft_put_unsigned_nbr_base(absolute_value, base);
}

/*
int	main(void)
{
	ft_putnbr_base(2147483647, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(-2147483648, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(42, "01");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(42, "01234567");
	ft_putchar('\n');
	ft_putnbr_base(42, "=-++");
	ft_putnbr_base(42, "AZ");
	ft_putchar('\n');
}
*/
