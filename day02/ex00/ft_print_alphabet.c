/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 15:46:31 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/14 15:51:06 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c) {
  write(1, &c, 1);
  return (0);
}

void ft_print_alphabet(void){
  char i = 'a';
  while (i <= 'z'){
    ft_putchar(i);
    i++;
  }
  ft_putchar('\n');
  return;
}