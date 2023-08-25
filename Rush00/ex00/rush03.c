/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:49:21 by aubertra          #+#    #+#             */
/*   Updated: 2023/08/05 15:49:24 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_top_end_line(int x);

void	print_empty_line(int x);

void	rush(int x, int y)
{
	int	line;

	if (x < 1 || y < 1)
		return ;
	print_top_end_line(x);
	if (y > 1)
	{
		line = 0;
		while (line < y - 2)
		{
			print_empty_line(x);
			line++;
		}
		print_top_end_line(x);
	}
}

void	print_top_end_line(int x)
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
