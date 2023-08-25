/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:04:15 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/03 14:14:50 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	if (str == 0)
		return (0);
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "hello";
	printf("%i\n", ft_strlen(str));
}
*/
