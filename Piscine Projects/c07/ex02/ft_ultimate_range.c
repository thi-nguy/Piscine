/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:05:09 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/13 16:09:23 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;
	int *table;

	if (min >= max)
	{
		table = NULL;
		return (0);
	}
	len = max - min;
	table = malloc(sizeof(int) * len);
	if (table == NULL)
		return (-1);
	i = 0;
	while (i < len)
	{
		table[i] = min;
		i++;
		min++;
	}
	*range = table;
	return (len);
}
