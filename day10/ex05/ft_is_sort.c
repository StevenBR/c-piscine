/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 21:48:10 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/25 21:48:11 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *table, int length, int (*f)(int, int))
{
	int index;
	int *ret_arr;

	index = -1;
	if (f(table[index + 1], table[index + 2]) == 0 ||
		f(table[index + 1], table[index + 2]) == -1)
	{
		while (++index < length)
		{
			if (f(table[index], table[index + 1]) == 1)
				return (0);
		}
	}
	else if (f(table[index + 1], table[index + 2]))
	{
		index = length;
		while (--index > 0)
		{
			if (f(table[index], table[index - 1]) == 1)
				return (0);
		}
	}
	return (1);
}
