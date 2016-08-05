/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 13:31:16 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/15 20:17:40 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int result;
	int count;

	result = 0;
	count = 0;
	while (str[count] != '\0')
	{
		result = result * 10 + str[count] - '0';
		count++;
	}
	return (result);
}

int main()
{
	int val;
	char str[] = "123456";
	val = ft_atoi(str);
	printf("%d", val);
	return (0);
}
