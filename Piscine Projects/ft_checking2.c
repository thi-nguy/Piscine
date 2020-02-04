/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsembely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:14:48 by tsembely          #+#    #+#             */
/*   Updated: 2019/09/08 23:24:39 by tsembely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_down(char **tab, int *max, int i)
{
	int		x;
	int		y;
	char	valu;
	int		compt;

	x = i % 4;
	valu = '0';
	compt = 0;
	y = 3;
	while (y >= 0)
	{
		if (tab[y][x] > valu)
		{
			valu = tab[y][x];
			++compt;
		}
		--y;
	}
	if (compt > max[i])
		return (0);
	return (1);
}

/*
**ft_check_down a le meme fonctionnement que ft_check_up. Elle nous permet de
** parcourir le tableau de bas en haut afin de trouver la plus grande caisse
** x % 4 nous permet de pouvoir deplacer le curseur de gauche a droite sur la
** derniere ligne:  x      x      x      x
**                  x      x      x      x
**                  x      x      x      x
**                1 % 4  2 % 4  3 % 4  4 % 4
*/

int		ft_check_left(char **tab, int *max, int i)
{
	int		x;
	int		y;
	char	valu;
	int		compt;

	x = 0;
	valu = '0';
	compt = 0;
	y = i % 4;
	while (x < 4)
	{
		if (tab[y][x] > valu)
		{
			valu = tab[y][x];
			++compt;
		}
		++x;
	}
	if (compt > max[i])
		return (0);
	return (1);
}

/*
** ft_check_left permet de trouver la + grosse caisse en parcourant le tableau
** de gauche a droite.
*/

int		ft_check_right(char **tab, int *max, int i)
{
	int		x;
	int		y;
	char	valu;
	int		compt;

	x = 3;
	valu = '0';
	compt = 0;
	y = i % 4;
	while (x >= 0)
	{
		if (tab[y][x] > valu)
		{
			valu = tab[y][x];
			++compt;
		}
		--x;
	}
	if (compt > max[i])
		return (0);
	return (1);
}

/*
** same as ft_check_right mais dans le sens inverse.
*/
