/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:37:50 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/15 21:38:09 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_total_len(int size, char **strs, char *sep)
{
	int i;
	int len_strs;
	int total_len;

	i = 0;
	len_strs = 0;
	while (i < size)
	{
		len_strs = ft_strlen(strs[i]) + len_strs;
		i++;
	}
	total_len = ft_strlen(sep) * (size - 1) + len_strs + 1;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		total_len;
	char	*s1;

	s1 = malloc(1);
	*s1 = '\0';
	if (size <= 0)
		return (s1);
	total_len = ft_total_len(size, strs, sep);
	tab = malloc(sizeof(char) * total_len);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (i == 0)
			tab = ft_strcpy(tab, strs[0]);
		else
			tab = ft_strcat(tab, strs[i]);
		if (i != size - 1)
			tab = ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
