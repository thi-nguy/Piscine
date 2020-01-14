/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:34:59 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/15 19:25:52 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int r;

	a = 0;
	while (dest[a] != '\0')
		a++;
	r = 0;
	while (src[r] != '\0')
		r++;
	if (size < a)
		r = r + size;
	else
		r = r + a;
	b = 0;
	while (src[b] != '\0' && a + 1 < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (r);
}
