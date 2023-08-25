/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:34:46 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/19 17:51:22 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

char	*ft_get_end_of_word(char *start, char *charset);
int		ft_count_words(char *str, char *charset);
char	*ft_word_dup(char *start, char *end, char *charset);
bool	is_sep(char c, char *str);

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	*start;
	int		count;
	char	*end;

	strs = malloc((1 + ft_count_words(str, charset)) * sizeof(char *));
	if (strs == NULL)
		return (NULL);
	while (is_sep(*str, charset))
		str++;
	start = str;
	count = 0;
	while (count < ft_count_words(str, charset) && *start)
	{
		end = ft_get_end_of_word(start, charset);
		strs[count++] = ft_word_dup(start, end, charset);
		start = end;
		while (is_sep(*start, charset))
			start++;
	}
	strs[count] = NULL;
	return (strs);
}

char	*ft_get_end_of_word(char *start, char *charset)
{
	while (*start)
	{
		if (is_sep(*start, charset))
			return (start);
		start++;
	}
	return (start);
}

char	*ft_word_dup(char *start, char *end, char *charset)
{
	char	*duplicate;
	char	*start_of_cpy;

	duplicate = malloc(end - start + 1);
	if (duplicate == NULL)
		return (NULL);
	start_of_cpy = duplicate;
	while (!is_sep(*start, charset) && *start)
	{
		*duplicate = *start;
		duplicate++;
		start++;
	}
	*duplicate = '\0';
	return (start_of_cpy);
}

int	ft_count_words(char *str, char *charset)
{
	int		count;
	bool	is_new_word;

	if (!str)
		return (0);
	count = 0;
	is_new_word = true;
	while (*str)
	{
		if (is_new_word && !is_sep(*str, charset))
			count++;
		if (is_sep(*str, charset))
			is_new_word = true;
		else
			is_new_word = false;
		str++;
	}
	return (count);
}

bool	is_sep(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (true);
		str++;
	}
	return (false);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**result;

	char test[] = "  ****** uuu hello* uuuu       *****  **world*!*  *    ";
	char charset[] = " *u9";
	int word_count = ft_count_words(test, charset);
	result = ft_split(test, charset);
	printf("%i words :\n", word_count);
	for (int i = 0; result[i]; i++)
	{
		printf("%s\n", result[i]);
	}
}
*/
