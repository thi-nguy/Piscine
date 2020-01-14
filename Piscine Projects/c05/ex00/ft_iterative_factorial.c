/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:03:40 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/10 16:01:22 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	fact = 1;
	if (nb < 0)
		return (0);
	else
	{
		i = 1;
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
}
