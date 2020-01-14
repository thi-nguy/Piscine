/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 19:31:22 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/05 11:59:15 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int t;

	i = 0;
	if (size <= 0)
		return ;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			t = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = t;
			while (i-- >= 0)
			{
				if (tab[i] > tab[i + 1])
				{
					t = tab[i + 1];
					tab[i + 1] = tab[i];
					tab[i] = t;
				}
			}
		}
		i++;
	}
}
