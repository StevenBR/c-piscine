/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 10:49:15 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/15 10:49:34 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>


int ft_strlen(char *str);
int ft_putchar(char c);

int ft_putchar(char c)
{
	write (1,&c,1);
	return(0);
}


int ft_strlen(char *str)
{
	int i;

	i=0;

	while(str[i] != '\0')
	{
		i++;
	}

	return i;
}

int main()
{
	printf("string length is: %i", ft_strlen("stringtobetested"));
	return(0);
}