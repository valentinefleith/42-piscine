/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafouas <vlafouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:30:13 by vlafouas          #+#    #+#             */
/*   Updated: 2023/08/23 13:32:48 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strlen_custom(const char *str, char terminator)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != terminator)
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, const char *src)
{
	char	*dest_copy;

	dest_copy = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_copy);
}
