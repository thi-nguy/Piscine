/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:00:46 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/18 17:04:39 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char letter;
	char a;
	
	letter = 'z';
	while (letter >= 'a')
	{
		if (letter % 2 == 0)
			write(1, &letter, 1);
		else
		{
			a = letter - 32;
			write(1, &a, 1);
		}
		letter--;
	}
	write(1, "\n", 1);
	return (0);
}
