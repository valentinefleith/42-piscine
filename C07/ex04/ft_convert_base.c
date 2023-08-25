/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:04:26 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/21 15:46:17 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

char			*ft_unsigned_itoa_base(unsigned int nbr, char *buffer,
					char *base);
char			*ft_itoa_base(int nbr, char *buffer, char *base);
char			*ft_reverse_str(char *str);
int				find_index_in_string(char *str, char c);
bool			ft_char_is_in_str(const char *str, char c);
bool			base_is_valid(char *base);
unsigned int	ft_unsigned_atoi_base(char *str, char *base);
int				ft_atoi_base(char *str, char *base);
int				find_size_of_result(int nbr, char *base_to);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		int_nbr;
	char	*converted_result;
	int		size_of_result;

	if (!base_is_valid(base_from) || !base_is_valid(base_to))
		return (NULL);
	int_nbr = ft_atoi_base(nbr, base_from);
	size_of_result = find_size_of_result(int_nbr, base_to);
	converted_result = malloc(size_of_result * sizeof(int));
	if (converted_result == NULL)
		return (NULL);
	converted_result = ft_itoa_base(int_nbr, converted_result, base_to);
	return (converted_result);
}

int	find_size_of_result(int nbr, char *base_to)
{
	int	size_of_result;
	int	base_length;

	size_of_result = 0;
	base_length = 0;
	while (base_to[base_length])
		base_length++;
	while (nbr / base_length > base_length)
	{
		size_of_result++;
		nbr = nbr / base_length;
	}
	return (size_of_result);
}

char	*ft_unsigned_itoa_base(unsigned int nbr, char *buffer, char *base)
{
	unsigned int	base_length;
	int				index;

	index = 0;
	base_length = 0;
	while (base[base_length])
		base_length++;
	if (nbr == 0)
		buffer[index] = base[0];
	while (nbr != 0)
	{
		buffer[index] = base[nbr % base_length];
		nbr = nbr / base_length;
		index++;
	}
	return (buffer);
}

char	*ft_itoa_base(int nbr, char *buffer, char *base)
{
	unsigned int	absolute_value;

	if (nbr < 0)
	{
		buffer[0] = '-';
		absolute_value = -nbr;
		buffer++;
		buffer = ft_reverse_str(ft_unsigned_itoa_base(absolute_value, buffer,
					base));
		return (buffer - 1);
	}
	else
	{
		absolute_value = nbr;
		return (ft_reverse_str(ft_unsigned_itoa_base(absolute_value, buffer,
					base)));
	}
}

char	*ft_reverse_str(char *str)
{
	int		index;
	int		strlen;
	char	temp;

	index = 0;
	strlen = 0;
	while (str[strlen])
		strlen++;
	while (index < (strlen / 2))
	{
		temp = str[index];
		str[index] = str[strlen - index - 1];
		str[strlen - index - 1] = temp;
		index++;
	}
	return (str);
}
/*
#include <stdio.h>

#define OCTAL "01234567"
#define HEX "0123456789abcdef"
#define DEC "0123456789"
#define BIN "01"

int	main(void)
{
	char* result = ft_convert_base("42", DEC, BIN);
	printf("%s\n", result);
}
*/
