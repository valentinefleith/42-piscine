/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:24:28 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/15 16:45:19 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_newline(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1 != 0 && *s2 != 0)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap_str(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	swap_counter;

	swap_counter = 1;
	while (swap_counter > 0)
	{
		swap_counter = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap_str(&argv[i], &argv[i + 1]);
				swap_counter++;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr_newline(argv[i]);
		i++;
	}
}
