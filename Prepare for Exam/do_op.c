/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:57:04 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 19:09:51 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int 	main(int ac, char **av)
{
	int result = 0;

	if (ac != 4)
	{
		printf("\n");
		return (0);
	}
	if(av[2][0] == '+')
		result = atoi(av[1]) + atoi(av[3]);
	else if (av[2][0] == '-')
		result = atoi(av[1]) - atoi(av[3]);
	else if (av[2][0] == '/')
		result = atoi(av[1]) / atoi(av[3]);
	else if (av[2][0] == '*')
		result = atoi(av[1]) * atoi(av[3]);
	printf("%i\n", result);
	return (0);
}

