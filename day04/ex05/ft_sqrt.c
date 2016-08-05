/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 10:21:19 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/16 10:21:26 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int	ft_calc(int count, int nb)
{
	if (count * count > nb)
	{
		return (0);
	}
	else if (count * count == nb)
	{
		return (count);
	}
	else
	{
		return (ft_calc(count + 1, nb));
	}
}

int	ft_sqrt(int nb)
{
	int x;

	x = ft_calc(1, nb);
	return (x);
}
