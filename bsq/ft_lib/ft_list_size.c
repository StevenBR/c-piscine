/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 23:17:20 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/27 23:17:22 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*temp;

	temp = begin_list;
	count = 0;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
