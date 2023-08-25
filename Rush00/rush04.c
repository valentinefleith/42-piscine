/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:49:36 by aubertra          #+#    #+#             */
/*   Updated: 2023/08/05 15:49:39 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_line(int x);

void	print_empty_line(int x);

void	print_last_line(int x);

void	rush(int x, int y)
{
	int	line;

	if (x < 1 || y < 1)
		return ;
	print_first_line(x);
	line = 0;
	while (line < y - 2)
	{
		print_empty_line(x);
		line++;
	}
	if (y > 1)
		print_last_line(x);
}

void	print_first_line(int x)
{
	int	count;

	ft_putchar('A');
	count = 0;
	while (count < x - 2)
	{
		ft_putchar('B');
		count++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	print_empty_line(int x)
{
	int	count;

	ft_putchar('B');
	count = 0;
	while (count < x - 2)
	{
		ft_putchar(' ');
		count++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	print_last_line(int x)
{
	int	count;

	ft_putchar('C');
	count = 0;
	while (count < x - 2)
	{
		ft_putchar('B');
		count++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}
