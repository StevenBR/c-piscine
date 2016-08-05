/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 15:50:37 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/15 16:37:19 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c) {
  write(1, &c, 1);
  return (0);
}

void ft_print_reverse_alphabet(void){
  char i;
  i = 'z';
  while(i >= 'a'){
    ft_putchar(i);
	i--;
  }
  ft_putchar('\n');
  return;
}
