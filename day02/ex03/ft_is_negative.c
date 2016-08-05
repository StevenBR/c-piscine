/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 15:49:53 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/14 15:50:01 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c) {
  write(1, &c, 1);
  return (0);
}

void ft_is_negative(int n) {
  
  if( n >= 0 || n == 'null' ){
    ft_putchar('P');
  } else {
    ft_putchar('N');
  }
  return;
}