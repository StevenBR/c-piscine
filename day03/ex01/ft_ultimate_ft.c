/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 22:13:26 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/14 22:13:29 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr); 
void put_char(void);


void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
	printf("value of *****nbr: %d \n", *********nbr);
}

int main(void)
{	
	int start;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********test;

	start = 3;
	printf("value of 'a' before: %d\n", start);
	ptr1 = &start;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	test = &ptr8;

	ft_ultimate_ft(test);

	// printf("value of nbr: %d", *********nbr);
	printf("value of 'a' after: %d", start);
	// ft_ultimate_ft(*********ptr9);
	return (0);
}

