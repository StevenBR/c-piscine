/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 20:41:19 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/18 20:41:21 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_putchar(char c)
{
	    write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
    	i++;
    }
}

char *ft_strncopy(char *dest, char *src, unsigned int ui)
{
    int i = 0;
    while (src[i] != '\0' && i < ui)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
	return (dest);
}


int main()
{
    char dest [] = "kme" ;
    char src[] = "steven";
	unsigned int ui = 8;
    ft_strncopy(dest, src, ui);
    printf("function result: %s and %s\n", src, dest);
    return (0);
}