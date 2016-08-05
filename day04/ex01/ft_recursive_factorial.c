/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 21:01:03 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/15 21:53:51 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	
	if (nb < 0)
	{
		return 0;
	}
	if (nb == 0)
	{
		return 1;
	}
	if (nb != 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else 
	{
		return nb;
	}
	
	
	return nb;
}

int main ()
{	
	int num;

	num = 10;

	printf("function param: %d\n", ft_recursive_factorial(num));
	return 0;
}


