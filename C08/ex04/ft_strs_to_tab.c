/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:10:41 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/24 11:28:52 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

t_stock_str			ft_str_to_stock_str(char *str);
t_stock_str			ft_get_null_stock_str(void);
int					ft_strlen(char *str);
char				*ft_strdup(char *str);
int					ft_strlen(char *str);

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*array;
	int			i;

	array = malloc((1 + argc) * sizeof(t_stock_str));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		array[i] = ft_str_to_stock_str(argv[i]);
		i++;
	}
	array[i] = ft_get_null_stock_str();
	return (array);
}

t_stock_str	ft_str_to_stock_str(char *str)
{
	t_stock_str	data;

	data.size = ft_strlen(str);
	data.str = str;
	data.copy = ft_strdup(str);
	return (data);
}

t_stock_str	ft_get_null_stock_str(void)
{
	t_stock_str	data;

	data.size = 0;
	data.str = NULL;
	data.copy = NULL;
	return (data);
}

char	*ft_strdup(char *str)
{
	char	*output;
	int		i;

	output = malloc(1 + ft_strlen(str));
	if (output == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		output[i] = str[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
