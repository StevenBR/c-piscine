/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 22:13:41 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/14 22:13:46 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);


void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main() 
{
	int num1;
	int num2;

	num1=1;
	num2=2;

	
	printf("a and b before switch(respectively): %d and %d\n", num1, num2);

	ft_swap(&num1, &num2);

	printf("a and b after switch(respectively): %d and %d\n", num1, num2);
	return(0);
}