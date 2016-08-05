/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 16:50:11 by jthai             #+#    #+#             */
/*   Updated: 2016/08/03 16:50:13 by jthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIST_H
# define _LIST_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	char			*data;
	struct s_list	*next;
}					t_list;

t_list				*ft_create_elem(void *data);
void				ft_list_push_front(t_list **begin_list, void *data);
int					ft_list_size(t_list *begin_list);
#endif
