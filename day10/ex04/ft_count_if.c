/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 21:14:31 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/25 21:15:42 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int count;

	count = 0;
	i = -1;
	while (tab[++i] != 0)
	{
		if (test_func(tab[i]) == 1)
			count++;
	}
	return (0);
}
