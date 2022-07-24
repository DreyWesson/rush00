/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambadou <sambadou@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:41:05 by sambadou          #+#    #+#             */
/*   Updated: 2022/07/24 19:41:08 by sambadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	first_row(int x, int y)
{
	int	i;

	i = 0;
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_putchar('A');
		while (i++ < x - 2 )
		{
			ft_putchar('B');
		}
		if (x > 1)
			ft_putchar('A');
		ft_putchar('\n');
	}
	return (0);
}

int	left_right_column(int x, int y)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		while (i++ < y - 2)
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
	}
	if (x > 1)
	{
		while (y - 2 > 0)
		{
			y -= 1;
			ft_putchar('B');
			while (i++ < x - 2)
				ft_putchar(' ');
			ft_putchar('B');
			ft_putchar('\n');
			i = 0;
		}
	}
	return (0);
}

int	last_row(int x, int y)
{
	int	i;

	i = 0;
	if (x == 1 && y > 1)
	{
		ft_putchar('C');
		return (0);
	}
	ft_putchar('C');
	while (i++ < x - 2)
	{
		ft_putchar('B');
	}
	if (x > 1)
		ft_putchar('C');
	return (0);
}

int	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return (0);
	first_row(x, y);
	left_right_column(x, y);
	if (y > 1)
	{
		last_row(x, y);
	}
	return (0);
}
