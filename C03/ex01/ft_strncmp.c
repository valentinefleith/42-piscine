/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafleith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:06:07 by vafleith          #+#    #+#             */
/*   Updated: 2023/08/09 11:27:23 by vafleith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (s1 == 0 || s2 == 0 || n == 0)
		return (0);
	i = 0;
	while (*s1 == *s2 && *s1 != 0 && *s2 != 0 && i < n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sign_of(int n);
void test(char* s1, char* s2, unsigned int n);

int main(int argc, char** argv) {
    if (argc != 4)
    {
        printf("Usage ./exec string1 string2 number_of_bytes\n");
        return 0;
    }
    test(argv[1], argv[2], atoi(argv[3]));
}

void test(char* s1, char* s2, unsigned int n) {
    int my_strncmp = ft_strncmp(s1, s2, n);
    int libc_strncmp = strncmp(s1, s2, n);
    printf("testing strncmp(%s, %s, %d)\n", s1, s2, n);
    printf("ft_strncmp\t%d \nlibc strcmp\t%d\n", my_strncmp, libc_strncmp);
    if (sign_of(my_strncmp) == sign_of(libc_strncmp))
        printf("ok :)\n");
    else {
        printf("rip :(\n");
    }
}

int sign_of(int n) {
    if (n > 0)
        return 1;
    if (n < 0)
        return -1;
    return 0;
}
*/
