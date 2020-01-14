/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:43:16 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/08 14:36:34 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i] != 0)
		i++;
	if (size == 0)
		return (i);
	else
	{
		while (src[j] != '\0' && j < size)
		{
			dest[j] = src[j];
			j++;
		}
		while (j < size)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (i);
}
