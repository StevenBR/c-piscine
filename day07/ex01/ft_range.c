/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 20:15:39 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/20 20:28:00 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	unsigned int	i;
	int				range;
	int				*result;

	range = max - min;
	result = malloc(range + 1);
	i = 0;
	while (i < range)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
