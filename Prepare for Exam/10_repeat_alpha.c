/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:31:41 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/18 19:08:51 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	repeat(char c, int t)
{
	int i;
	
	i = 1;
	while(i < t)
	{
		write(1, &c, 1);
		i++;
	}
}

void	repeat_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			repeat(str[i], (str[i] - 96));
		else if (str[i] <= 'Z' && str[i] >= 'A')
			repeat(str[i], (str[i] - 64));
		write(1, &str[i], 1);
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
	repeat_alpha(av[1]);
	return (0);
}
