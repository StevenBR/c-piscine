/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 10:33:04 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/15 10:33:06 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h> 
#include <unistd.h>


void ft_putstr(char *str);
int ft_putchar(char c);

int ft_putchar(char c)
{
	write (1,&c,1);
	return(0);
}

void ft_putstr(char *str)
{
	int i;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return;
}


int main() 
{
	char *test;

	test = "testerstring";

	ft_putstr(test);

	return(0);
}