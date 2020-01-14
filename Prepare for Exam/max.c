/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:23:48 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 18:45:25 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int		max(int *tab, unsigned int len)
{
	unsigned int i;
	int max;

	i = 0;
	max = tab[0];
	if (len == 0)
		return (0);
	while (i < len)
	{ 
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int		main(void)
{
	int *tab;
	tab = (int*)malloc(sizeof(int) * 4);
	unsigned int len = 4;
	tab[0] = 2;
	tab[1] = 4;
	tab[2] = 6;
	tab[3] = 1;
	printf("%i\n", max(tab, len));
	return (0);
}
