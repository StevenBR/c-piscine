/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 17:26:51 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/25 17:48:47 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *res_arr;

	res_arr = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		res_arr[i] = f(tab[i]);
		i++;
	}
	return (res_arr);
}
