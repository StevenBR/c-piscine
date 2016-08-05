/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cathead.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 21:58:20 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/28 21:58:21 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CATHEAD_H
# define _CATHEAD_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

void ft_putstr(char *str);
void ft_putnbr(int nbr);

#endif
