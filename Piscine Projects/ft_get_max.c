/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsembely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:31:19 by tsembely          #+#    #+#             */
/*   Updated: 2019/09/08 21:48:38 by tsembely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*
** On inclut header.h car le fichier.h contient les prototypes des fonctions
*/

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
** ft_strlen sert a compter le nombre de caracteres dans une chaine.
*/

int		ft_atoi(char *str)
{
	int		i;
	int		pn;
	int		nb;

	nb = 0;
	pn = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		++i;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pn = -pn;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		++i;
	}
	return (nb * pn);
}

/*
** ft_atoi sert a transformer les valeurs de max en entier afin de visualiser
** le nombre de caisse qui doit etre vu par l'observateur.
*/

int		*ft_free_ret(int *max)
{
	free(max);
	return (NULL);
}

/*
** fonction pour liberer la memoire allouee et respecter la norme dans la
** fonction suivante...cf 25 lignes...
*/

int		*ft_get_max(int *max, char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((max = (int *)malloc(sizeof(int) * ((ft_strlen(str) / 2) + 1))) == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			max[j] = ft_atoi(&str[i]);
			if (max[j] > 4 || max[j] < 1)
				return (ft_free_ret(max));
			++j;
		}
		++i;
	}
	if (j != 16)
		return (ft_free_ret(max));
	max[j] = 0;
	return (max);
}

/*
** Afin de stocker les entiers compris dan la chaine de caractere renseigne
** par l'utilisateur, (char *str -> le nombre de caisse visible voulu)
** on alloue la moitie de la taille de la chaine de caractere a int*max car
** nous ne voulons pas des espaces. Pour les enlever nous utilisons ft_atoi.
** Si jamais les valeurs de max sont differentes des tailles des caisses
** renseigne dan l'enonce, ou que l'on a pas 16 valeurs dans le contour  max
** alors on libere la memoire allouee a max.
*/
