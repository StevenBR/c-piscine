/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 00:49:04 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/22 01:09:58 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_button(int i, int j, int k)
{
	unsigned int index1;
	unsigned int index2;
	int temp;
	int henchmen[3];

	henchmen[1] = i;
	henchmen[0] = j;
	henchmen[2] = k;
	index1 = 0;
	while (index1 < 3)
	{
		index2 = index1;
		while (index2 <3)
		{
			if (henchmen[index1] > henchmen[index2])
				temp = henchmen[index1];
				henchmen[index1] = henchmen[index2];
				henchmen[index2] = temp;
		}
	}
	return henchmen[1];
}

int main (void)
{
	printf("result: %d\n", ft_button(3,7,1));
	return 0;
}


7 x 3 + 1 = 22
22/2 = 11
11 x 3 + 1 = 34
