/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsembely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:52:14 by tsembely          #+#    #+#             */
/*   Updated: 2019/09/08 23:21:04 by tsembely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_line(char **tab, int x, int y, int s)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if (tab[y][i] == s + '1')
			return (0);
		++i;
	}
	return (1);
}

/*
** ft_line check si le nombre/la caisse est deja presente dans la ligne
** suivante, si c'est le cas, elle renvoie 0, sinon elle passe a la ligne
** suivante.
*/

int		ft_colon(char **tab, int x, int y, int s)
{
	int		i;

	i = 0;
	while (i < y)
	{
		if (tab[i][x] == s + '1')
			return (0);
		++i;
	}
	return (1);
}

/*
** ft_colon check si le nombre/la caisse est deja presente dans la colonne
** suivante, si c'est le cas, elle renvoie 0, sinon elle passe a la colonne
** suivante.
*/

int		ft_fill_tab(char **tab, int *max, int x, int y)
{
	int		s;

	s = -1;
	while (++s < 4)
		if (ft_line(tab, x, y, s) && ft_colon(tab, x, y, s))
		{
			tab[y][x] = s + '1';
			if (x < 3)
			{
				if (ft_fill_tab(tab, max, x + 1, y) == 1)
					return (1);
			}
			else if (x == 3 && y < 3)
			{
				if (ft_fill_tab(tab, max, 0, y + 1) == 1)
					return (1);
			}
			else if (x == 3 && y == 3 && ft_check(tab, max))
				return (1);
		}
	tab[y][x] = '0';
	return (0);
}

/*
** La premiere condition verifie que le tableau et la matrice sont valide.
** puis on met la premiere caisse dans la case tab[0][0], tant que la ligne
** n'est pas terminee, fill_tab remplie chaque case de gauche a droite en
** respectant les parametres de max. La recursivite de fill_tab empile les
** occurences sur la stack tant que la condition est valide. Sinon la derniere
** occurence de fill_tab est retire de la pile/stack. Elle verifie a nouveau
** la validitee de fill_tab avec une nouvelle valeur, (s + 1).
** Une fois la premiere ligne terminee, l'indice y augmente pour passer a la
** suivante. L'operation est repetee jusqu'a arriver a la case y3/x3.
*/
