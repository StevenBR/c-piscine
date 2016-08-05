/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 14:18:02 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/16 14:18:05 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fibonacci(int index)
{
	int first;
	int second;
	int next;
	int i;

	first = 0;
	second = 1;
	i = 0;
	while (i <= index)
	{
		if (i <= 1)
		{
			next = i;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		i++;
	}
	return (next);
}
