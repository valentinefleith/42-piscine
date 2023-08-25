/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:06:07 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/09 12:52:45 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	if (s1 == 0 || s2 == 0)
		return (0);
	while (*s1 == *s2 && *s1 != 0 && *s2 != 0)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>

void	test(char* s1, char* s2) {
	int comparison = ft_strcmp(s1, s2);
	if (comparison > 0) {
		printf("%s is greater than %s\n", s1, s2);
	} else if (comparison < 0) {
		printf("%s is less than %s\n", s1, s2);
	} else {
		printf("%s is equal to %s\n", s1, s2);
	}
}

int	main(void) {
	test("ABC", "ABC");
	test("ABC", "AB");
	test("ABA", "ABZ");
	test("ABJ", "ABC");
}
*/
