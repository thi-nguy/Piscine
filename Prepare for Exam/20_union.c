/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:17:44 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 18:16:06 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		not_before(char *s, int index, char c)
{
	int i;
	
	i = 0;
	while (i < index)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		if (not_before(s1, i, s1[i]))
				write(1, &s1[i], 1);
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		if (not_before(s1, i, s2[j]) && not_before(s2, j, s2[j]))
			write(1, &s2[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int 	main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_union(av[1], av[2]);
	return (0);
}
