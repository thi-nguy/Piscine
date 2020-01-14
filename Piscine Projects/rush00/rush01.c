/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spartouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 11:34:25 by spartouc          #+#    #+#             */
/*   Updated: 2019/09/01 21:49:34 by jvanneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	head(int x)
{
	int a;

	a = 2;
	ft_putchar('/');
	while (a < x)
	{
		ft_putchar('*');
		a++;
	}
	if (a == x)
	{
		ft_putchar('\\');
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
			ft_putchar('*');
			while (j >= 3)
			{
				j--;
				ft_putchar(' ');
			}
			ft_putchar('*');
		}
		else if (j == 1)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
		i++;
	}
}

void	end(int x)
{
	int b;

	b = 2;
	ft_putchar('\\');
	while (b < x)
	{
		ft_putchar('*');
		b++;
	}
	if (b == x)
	{
		ft_putchar('/');
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
