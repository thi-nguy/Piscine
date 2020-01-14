/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 15:13:13 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/01 09:47:41 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	head(int x)
{
	int j;

	j = x;
	if (j > 1)
	{
		ft_putchar('o');
		while (j >= 3)
		{
			j--;
			ft_putchar('-');
		}
		ft_putchar('o');
	}
	else if (j == 1)
	{
		ft_putchar('o');
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
			ft_putchar('|');
			while (j >= 3)
			{
				j--;
				ft_putchar(' ');
			}
			ft_putchar('|');
		}
		else if (j == 1)
		{
			ft_putchar('|');
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
	}
	if (y == 1)
	{
		head(x);
	}
}
