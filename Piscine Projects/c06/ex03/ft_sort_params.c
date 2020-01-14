/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:56:03 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/14 12:15:25 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
		a++;
	return (s1[a] - s2[a]);
}

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int		main(int ac, char **av)
{
	int i;
	int j;
	int k;
	int arg[ac];

	i = 1;
	while (i < ac)
	{
		arg[i] = i;
		i++;
	}
	j = 1;
	while (j < ac)
	{
		k = j;
		while (k < ac)
		{
			if (ft_strcmp(av[arg[j]], av[arg[k]]) > 0)
				ft_swap(&arg[j], &arg[k]);
			k++;
		}
		ft_putstr(av[arg[j++]]);
	}
	return (0);
}
