/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spartouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 11:34:25 by spartouc          #+#    #+#             */
/*   Updated: 2019/09/01 21:53:27 by jvanneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	head(int x)
{
	int a;

	a = 2;
	ft_putchar('A');
	while (a < x)
	{
		ft_putchar('B');
		a++;
	}
	if (a == x)
	{
		ft_putchar('C');
	}
}

void	mid(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y - 2)
	{
		j = x;
		if (j > 1)
		{
			ft_putchar('B');
			while (j >= 3)
			{
				j--;
				ft_putchar(' ');
			}
			ft_putchar('B');
		}
		else if (j == 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		i++;
	}
}

void	end(int x)
{
	int b;

	b = 2;
	ft_putchar('C');
	while (b < x)
	{
		ft_putchar('B');
		b++;
	}
	if (b == x)
	{
		ft_putchar('A');
	}
}

void	rush(int x, int y)
{
	if (y >= 2)
	{
		head(x);
		ft_putchar('\n');
		mid(x, y);
		end(x);
	}
	if (y == 1)
	{
		head(x);
	}
}
