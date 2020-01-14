/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:15:15 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 16:36:40 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
unsigned char 	reverse_bits(unsigned char octet)
{
	return (((octet >> 0) & 1) << 7) | \
		(((octet >> 1) & 1) << 6) | \
		(((octet >> 2) & 1) << 5) | \
		(((octet >> 3) & 1) << 4) | \
		(((octet >> 4) & 1) << 3) | \
		(((octet >> 5) & 1) << 2) | \
		(((octet >> 6) & 1) << 1) | \
		(((octet >> 7) & 1) << 0);
}

int	main(void)
{
	unsigned char c;

	c = 'd';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
