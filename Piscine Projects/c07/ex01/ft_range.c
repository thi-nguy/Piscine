/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:40:44 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/15 21:31:10 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int len;
	int *tab;

	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	len = max - min;
	tab = (int*)malloc(sizeof(int) * len);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = '\0';
	return (tab);
}
