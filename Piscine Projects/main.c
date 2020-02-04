/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsembely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:24:17 by tsembely          #+#    #+#             */
/*   Updated: 2019/09/08 21:53:55 by tsembely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*
** #include sert a inclure le fichier.h qui contient tout les prototypes
** des fonctions utilisees dans le programme.
*/

void	ft_print_error(void)
{
	write(1, "Error\n", 6);
}

/*
** ft_print_error sert simplement a afficher un message d'erreur.
*/

void	ft_init_tab(char **tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i] != NULL)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = '0';
			++j;
		}
		tab[i][j] = '\0';
		i++;
	}
}

/*
** La fonction ft_init  remplie notre tableau char[5][5] de 0.
*/

void	ft_write_tab(char **tab)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (tab[i] != NULL)
	{
		while (j < 4)
		{
			write(1, &tab[i][j], 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		if (j > 3)
			write(1, "\n", 1);
		j = 0;
		i++;
	}
}

/*
** La fonction ft_write_tab nous sert a afficher le contenu de chaque case du
** tableau ainsi qu'a inserer les espaces et les retours a la ligne.
*/

char	**ft_create_tab(void)
{
	char	**tab;
	int		i;

	i = 0;
	if ((tab = (char **)malloc(sizeof(char *) * 5)) == NULL)
		return (NULL);
	while (i < 4)
	{
		if ((tab[i] = (char *)malloc(sizeof(char) * 5)) == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(tab[i]);
				i--;
			}
			return (NULL);
		}
		i++;
	}
	tab[4] = NULL;
	ft_init_tab(tab);
	return (tab);
}

/*
** ft_create_tab demande a allouer la memoire necessaire (grace a malloc)
** a la creation du  tableau de tableau (tab[5][5]).
** Si la memoire n'est pas disponible, on libere tous l'espace deja allouee
** (avec free()) et on return NULL. Si la memoire necessaire est disponible,
** on fait appel a ft_init pour le remplir de 0 puis on le return..
*/

int		main(int argc, char **argv)
{
	char	**tab;
	int		*max;

	if (argc != 2)
	{
		ft_print_error();
		return (0);
	}
	if ((tab = ft_create_tab()) == NULL)
	{
		ft_print_error();
		return (0);
	}
	max = NULL;
	max = ft_get_max(max, argv[1]);
	if (max == NULL)
	{
		ft_free_tab(tab);
		ft_print_error();
		return (0);
	}
	ft_fill_tab(tab, max, 0, 0);
	ft_write_tab(tab);
	return (0);
}

/*
** La fonction principale assure le deroulement du programme.
** On affiche un msg d'erreur si :
** -La fonction main contient + ou - de 2 arguments (argc agv).
** -Si il l'allocation memoire ne permet pas la creation du tableau.
** -Si l'allocation memoire  du cadre (int *max) a echouer.
** Puis, on va remplir les cases du tableau grace a ft_fill_tab.
** et enfin on printera le resultat avec ft_write_tab.
*/
