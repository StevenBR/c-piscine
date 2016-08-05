/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 23:07:39 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/14 23:07:43 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

 void ft_ultimate_div_mod(int *a, int *b);

  void ft_ultimate_div_mod(int *a, int *b) 
  {
  	int temp;

	printf("before:a and b (resp): %d and %d\n", *a, *b);
  	temp = *a;
  	*a = *a / *b;
  	*b = (temp%*b);
	printf("after:a and b (resp): %d and %d\n", *a, *b);
  }

  int main()
  {
  	int ia;
  	int ib;

  	ia=10;
  	ib=3;
  	
  	ft_ultimate_div_mod(&ia, &ib);
  	
  	return (0);
  }