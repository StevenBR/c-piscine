/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 13:53:40 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/27 13:53:42 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bsqmain.h"
#include "../headers/list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	list = ft_create_elem(data);
	list->next = *begin_list;
	*begin_list = list;
}
