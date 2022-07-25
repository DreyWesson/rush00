/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:40:36 by sambadou          #+#    #+#             */
/*   Updated: 2022/07/24 20:52:11 by doduwole         ###   ########.fr       */
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
		ft_putchar('o');
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_putchar('o');
		while (i++ < x - 2)
		{
			ft_putchar('-');
		}
		if (x > 1)
			ft_putchar('o');
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
			ft_putchar('|');
			ft_putchar('\n');
		}
	}
	if (x > 1)
	{
		while (y - 2 > 0)
		{
			y -= 1;
			ft_putchar('|');
			while (i++ < x - 2)
				ft_putchar(' ');
			ft_putchar('|');
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
		ft_putchar('o');
		return (0);
	}
	ft_putchar('o');
	while (i++ < x - 2)
	{
		ft_putchar('-');
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
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
