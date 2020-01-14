/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:57:15 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 12:01:30 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	rev_print(char *str)
{
	int i;
	int len;

	len = ft_strlen(str);
	i = len - 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

int 	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rev_print(av[1]);
	return (0);
}
