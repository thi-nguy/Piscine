/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:12:51 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/18 19:45:56 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int 	search_and_replace(char *str, char *a, char *b)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (a[1] != '\0' || b[1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	
	while (str[i] != '\0')
	{
		if (str[i] == a[0])
			str[i] = b[0];
		i++;
	}
	ft_putchar(str);
	write(1, "\n", 1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	search_and_replace(av[1], av[2], av[3]);
	return (0);
}	
