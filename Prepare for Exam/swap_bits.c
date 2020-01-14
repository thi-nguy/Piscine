/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:37:07 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 16:49:23 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char swap(unsigned char c)
{
	return  ((c >> 4) | (c << 4));
}

int main(void)
{
	unsigned char c;

	c = 'd';
	write(1, &c, 1);
	c = swap(c);
	write(1, &c, 1);
	return (0);
}
	
