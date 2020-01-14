/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:29:30 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/09/10 16:02:44 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	if (power != 0)
	{
		while (i <= power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
	else
		return (1);
}
