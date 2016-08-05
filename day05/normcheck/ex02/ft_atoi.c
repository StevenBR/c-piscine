/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 17:47:20 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/18 18:21:40 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	ft_atoi(char *str)
{
	int i;
	int sign;
	int result;
	int nbr;

	i = 0;
	sign = 1;
	result = 0; 
	if (str[0] == '-'){
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nbr = (int)(str[i] - '0');
		result = (result * 10) + nbr;
		i++;
	}
	return (result * sign);
}
int main()
{
	char string[] = "-1234";
	int val;
	
	val = ft_atoi(string);
	printf("atoi value: %d", val);
	return(0);
}