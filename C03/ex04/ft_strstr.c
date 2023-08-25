/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:58:20 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/09 11:47:31 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (str == 0 || to_find == 0)
		return (str);
	if (!*to_find)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK "ok :)"
#define FAIL "rip :("

void	test_str_str(char *str, char *to_find)
{
	char	*libc_match;
	char	*my_match;
	int		libc_match_index;
	int		my_match_index;

	libc_match = strstr(str, to_find);
	my_match = ft_strstr(str, to_find);
	libc_match_index = libc_match - str;
	my_match_index = my_match - str;
	printf("attempting to find \"%s\" in \"%s\"\n", to_find, str);
	if (libc_match == 0)
	{
		if (my_match == 0)
		{
			printf("%s no match found\n", OK);
		}
		else
		{
			printf("%s no match for libc but ft_strstr found at %d\n",
					FAIL,
					my_match_index);
		}
		return ;
	}
	if (my_match == 0)
	{
		if (libc_match == 0)
		{
			printf("%s no match found\n", OK);
		}
		else
		{
			printf("%s no match for ft_strstr but libc found at %d\n",
					FAIL,
					libc_match_index);
		}
		return ;
	}
	if (libc_match_index == my_match_index)
	{
		printf("%s both functions found a match at index %d\n", OK,
				my_match_index);
	}
	else
	{
		printf("%s match found at index %d for libc and %d for ft_strstr\n",
				FAIL,
				libc_match_index,
				my_match_index);
	}
	return ;
}

int	main(void)
{
	test_str_str("Shorter", "Short");
}
*/
