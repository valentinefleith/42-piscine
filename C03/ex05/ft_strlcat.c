/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:42:57 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/09 12:00:41 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	count;

	count = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size < 1)
		return (src_length + size);
	while (*dest)
		dest++;
	while (*src && count < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	if (dest_length > size)
		return (src_length + size);
	return (dest_length + src_length);
}
/*
#include <bsd/string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 64
#define OK "ok :)"
#define FAIL "rip :("

bool	ft_is_same_string(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 == *s2);
}

void	test_strlcat(char *dest, char *src, unsigned int size)
{
	char	my_buffer[BUFFER_SIZE];
	char	libc_buffer[BUFFER_SIZE];

	strcpy(my_buffer, dest);
	strcpy(libc_buffer, dest);
	unsigned int my_strlcat_return (= ft_strlcat(my_buffer, src, size));
	unsigned int libc_strlcat_return (= strlcat(libc_buffer, src, size));
	if (my_strlcat_return == libc_strlcat_return)
	{
		printf("%s both functions returned %u\n", OK, my_strlcat_return);
	}
	else
	{
		printf("%s libc fct returned %u and ft_strlcat returned %u\n", FAIL,
				libc_strlcat_return, my_strlcat_return);
	}
	if (ft_is_same_string(my_buffer, libc_buffer))
	{
		printf("%s both buffers contain the string:\n", OK);
		printf("%s\n", my_buffer);
	}
	else
	{
		printf("%s my buffer contains the string:\n", FAIL);
		printf("%s\n", my_buffer);
		printf("but libc buffer contains\n");
		printf("%s\n", libc_buffer);
	}
	printf("\n");
}

int	main(void)
{
	test_strlcat("hello", "bonjour\n",
			BUFFER_SIZE);
}
*/
