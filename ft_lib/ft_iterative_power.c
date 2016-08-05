/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 09:56:14 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/16 09:56:18 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int num;

	num = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power >= 0)
	{
		num = nb * num;
		power--;
	}
	return (num);
}
