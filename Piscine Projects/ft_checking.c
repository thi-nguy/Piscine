/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsembely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:50:53 by tsembely          #+#    #+#             */
/*   Updated: 2019/09/08 23:25:16 by tsembely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_free_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

/*
**ft_free_tab sert a liberer la memoire allouee a tab
*/

int		ft_check_up(char **tab, int *max, int i)
{
	int		x;
	int		y;
	char	valu;
	int		compt;

	x = i;
	valu = '0';
	compt = 0;
	y = 0;
	while (y < 4)
	{
		if (tab[y][x] > valu)
		{
			valu = tab[y][x];
			++compt;
		}
		++y;
	}
	if (compt > max[i])
		return (0);
	return (1);
}

/*
** ft_check_up va nous servir a faire le lien entre le nombre de caisse que
** l'observateur va voir et la bonne repartition de celle-ci dans le tableau
** depuis la position de haut en bas. Valu est  la + grande taille de caisse
** rencontre. Compt continu de s'incrementer tant qu'il reste des caisses
** plus grande
*/

int		ft_check(char **tab, int *max)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		if (i / 4 == 0 && ft_check_up(tab, max, i) == 0)
			return (0);
		else if (i / 4 == 1 && ft_check_down(tab, max, i) == 0)
			return (0);
		else if (i / 4 == 2 && ft_check_left(tab, max, i) == 0)
			return (0);
		else if (i / 4 == 3 && ft_check_right(tab, max, i) == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
** ft_check permet de determiner la validitee du tableau, en fonction des
** conditions de vue imposee par max.
*/
