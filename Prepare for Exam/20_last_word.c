/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:36:22 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 14:59:50 by thi-nguy         ###   ########.fr       */
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

void	last(char *str)
{
	int i;
	int len;
	int start;
	int end;

	len = ft_strlen(str);
	i = len - 1;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	end = i;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i--;
	start = i + 1;
	while (start <= end)
	{
		write(1, &str[start], 1);
		start++;
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
	last(av[1]);
	return (0);
}
	

