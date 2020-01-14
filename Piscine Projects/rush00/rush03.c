/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 10:12:27 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/01 10:33:11 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	head(int x)
{
	int j;

	j = x;
	if (j > 1)
	{
		ft_putchar('A');
		while (j >= 3)
		{
			j--;
			ft_putchar('B');
		}
		ft_putchar('C');
	}
	else if (j == 1)
	{
		ft_putchar('A');
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

void	rush(int x, int y)
{
	if (y >= 2)
	{
		head(x);
		ft_putchar('\n');
		mid(x, y);
		head(x);
		ft_putchar('\n');
	}
	if (y == 1)
	{
		head(x);
		ft_putchar('\n');
	}
}
