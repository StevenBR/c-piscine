/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 15:50:24 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/14 15:50:27 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c) {
  write(1, &c, 1);
  return (0);
}

void ft_print_numbers(void){
  char i='0';
  while(i<='9'){
    ft_putchar(i);
    i++;
  }
  ft_putchar('\n');
  return;
}
