/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 22:39:47 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/14 22:39:50 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;

	printf("%d/%d is: %d\n", a, b, *div);
	
	*mod = a%b;

	printf("with a remainder of %d/%d is: %d\n", a, b, *mod);
}

int main()
{
	int ia;
	int ib;
	int divide;
	int modulo;
	int temp;

	temp= 0;
	ia = 10; 
	ib = 3;
	divide = 0;
	modulo = 0;
	ft_div_mod(ia,ib, &divide, &modulo);

	return(0);
}
