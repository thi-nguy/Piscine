/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:13:18 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 14:17:46 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*check_double(char *str)
{
	int i;
	int j;
	int len = ft_strlen(str);

	i = len - 1;
	while (i >= 0)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (str[i] == str[j])
				str[i] = 1;
			j--;
		}
		i--;
	}
	return (str);
}

void 	inter(char *tab, char *s2)
{
	int i;
	int j;
	char *s1;
		
	s1 = check_double(tab);	
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				write(1, &s1[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}

int 	main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	inter(av[1], av[2]);
	return (0);
}
