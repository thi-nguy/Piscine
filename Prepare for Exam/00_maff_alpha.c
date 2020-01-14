/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:51:32 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/18 16:09:05 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		main(void)
{
	char letter;
	char a;

	letter = 'a';
	while (letter  <= 'z')
	{
		if (letter%2 == 1)
			write(1, &letter, 1);
		else
		{
			a = letter - 32;
			write(1, &a, 1);
		}
		letter++;
	}
	write(1, "\n", 1);
	return (0);
}
