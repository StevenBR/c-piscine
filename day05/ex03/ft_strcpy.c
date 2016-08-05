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

void ft_putstr(char *str);
void ft_putchar(char c)
{
	    write(1, &c, 1);
}

char *ft_strcopy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
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
    // char maybe[]
    ft_strcopy(dest, src);
    printf("function result: %s and %s\n", src, dest);
    return (0);
}