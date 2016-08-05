/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 15:19:00 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/29 15:19:02 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BTREE_H
# define _FT_BTREE_H

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_btree
{
	struct s_btree *item;
	struct s_btree *right;
	struct s_btree *left;
}				t_btree;

void ft_putstr(char *str);
void	ft_putchar(char c);
# endif
