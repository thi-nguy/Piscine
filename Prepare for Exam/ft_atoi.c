/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 12:57:04 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 13:12:44 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int		ft_atoi(const char	*str)
{
	int i;
	int nb;
	int s;
	int j;

	i = 0;
	nb = 0;
	s = 1;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * (-1);
		i++;
		j++;
	}
	if (j > 1)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * s);
}

int		main(int ac, char **av)
{
	(void)ac;
	
	printf("From true function: %i\n", atoi(av[1]));
	printf("From MY function: %i\n", ft_atoi(av[1]));
	return (0);
}
