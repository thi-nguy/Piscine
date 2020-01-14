/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:10:10 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/18 16:29:26 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void 	ft_putstr(char *str)
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


int	main(int ac, char **av)
{
if (ac < 2)
{
write(1, "\n", 1);
return (0);
}
else
ft_putstr(av[1]);
return (0);
}	
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
