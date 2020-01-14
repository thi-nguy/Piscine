/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_rotone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 12:02:09 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 12:55:42 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int i;
	char *tab;

	i = 0;
	tab = str;
	while (tab[i] != '\0')
	{
		if (tab[i] == 'Z' || tab[i] == 'z')
		   tab[i] = tab[i] - 25;
		else if ((tab[i] >= 'A' && tab[i] <= 'Y') || (tab[i] >= 'a' && tab[i] <= 'y'))
			tab[i] = tab[i] + 1;
		i++;
	}
	i = 0;
	while (tab[i] != '\0')
	{
		write(1, &tab[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}	
	rotone(av[1]);
	return (0);
}
			

