/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 21:36:14 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/26 21:36:15 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bsqmain.h"
#include "../headers/list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	if (!(tmp = (t_list*)malloc(sizeof(t_list))))
		return (0);
	tmp->data = data;
	tmp->next = NULL;
	return (tmp);
}
