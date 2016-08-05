/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 22:52:10 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/27 23:20:44 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*tmp;
	int		cnt;

	list = NULL;
	cnt = 0;
	while (cnt < ac)
	{
		tmp = ft_create_elem((char*)av[cnt]);
		tmp->next = list;
		list = tmp;
		cnt++;
	}
	return (list);
}
