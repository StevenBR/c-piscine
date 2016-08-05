/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 20:33:28 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/15 20:56:39 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int count;

	result = 1;
	count = 1;
	while (count <= nb)
	{
		result *= count;
		count++;
	}
	return (result);
}
