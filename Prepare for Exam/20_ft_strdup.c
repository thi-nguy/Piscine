/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20_ft_strdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:19:14 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/19 14:48:21 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	   char *dest;
	   int len;
	   int i;

	   len = ft_strlen(src);
	   dest = (char *)(malloc(sizeof(char) * len + 1));
	   if(!dest)
		   return (NULL);
	   i = 0;
	   while (i < len)
	   {
		   dest[i] = src[i];
		   i++;
	   }
	   dest[i] = '\0';
	   return (dest);
}

int 	main(int ac, char **av)
{
	(void)ac;

	printf("My function: %s\n", ft_strdup(av[1]));
	printf("True function: %s\n", strdup(av[1]));
	return (0);
}
