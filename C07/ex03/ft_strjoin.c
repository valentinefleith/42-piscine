/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:15:54 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/20 12:36:21 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_get_total_size_of_string(int size, char **strs, char *sep);
char	*ft_fill_str(char **src, char *dest, char *sep, int size);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined_strs;
	int		size_of_string;

	size_of_string = ft_get_total_size_of_string(size, strs, sep);
	joined_strs = malloc(size_of_string * sizeof(char *));
	*joined_strs = '\0';
	if (joined_strs == NULL)
		return (joined_strs);
	if (size <= 0)
		return (joined_strs);
	return (ft_fill_str(strs, joined_strs, sep, size));
}

int	ft_get_total_size_of_string(int size, char **strs, char *sep)
{
	int	total_size;
	int	index;

	total_size = 0;
	index = 0;
	if (size == 0)
		return (1);
	while (index < size)
	{
		total_size += ft_strlen(strs[index]);
		index++;
	}
	total_size += (ft_strlen(sep) * (size - 1));
	return (1 + total_size);
}

char	*ft_fill_str(char **src, char *dest, char *sep, int size)
{
	int	index;

	index = 0;
	while (index < size - 1)
	{
		ft_strcat(dest, src[index]);
		ft_strcat(dest, sep);
		index++;
	}
	ft_strcat(dest, src[size - 1]);
	return (dest);
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

char	*ft_strcat(char *dest, char *src)
{
	char	*cpy;

	cpy = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (cpy);
}

/*
#include <stdio.h>

int	main(void) {
	char* strs[] = {
		"Bonjour",
		"lol",
		"comment",
		"ca",
		"va",
		"lateam",
	};
	char sep[] = "**";
	int size = 6;

	char* joined = ft_strjoin(size, strs, sep);

	printf("%s", joined);
	printf("\n");

	free(joined);
}
*/
