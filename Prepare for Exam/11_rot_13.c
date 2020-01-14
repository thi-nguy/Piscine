/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_rot_13.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:39:05 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 10:57:39 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int 	rot_13(char *tab)
{
	int i;
	
	char *str = tab;

	i = 0;
	if (str[0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] = str[i] + 13;
		else if((str[i] >= 'N' && str [i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] = str[i] - 13;
		i++;
	}
	ft_putstr(str);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		rot_13(av[1]);
	return (0);
}

