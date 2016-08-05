/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:58:27 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/20 21:58:30 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	int				size;
	int				*result;

	i = 0;
	size = max - min;
	result = size <= 0 ? NULL : (int *)malloc(sizeof(result) * (size));
	while (i < size && result != NULL)
	{
		result[i] = min;
		min++;
		i++;
	}
	*range = result;
	return (result) == NULL ? 0 : size;
}
