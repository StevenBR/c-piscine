/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 20:33:28 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/15 21:00:41 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <time.h>

int ft_iterative_factorial(int nb)
{	
	clock_t start = clock();
	printf("function param: %d\n", nb); 
	int result;
	int count;

	result = 1;
	count = 1;
	
	while(count <= nb)
	{
		result *= count;
		count++;
	}
	
	printf("result: %d\n", result);
	clock_t end = clock();
	float time_spent = (float)(end - start)/CLOCKS_PER_SEC;
	printf("%f\n", time_spent);
	return (0);
}

int		main ()
{
	int num;

	num = 15;

	ft_iterative_factorial(num);
	return (0);
}
