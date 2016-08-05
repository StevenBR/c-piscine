/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 10:49:03 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/16 10:49:07 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb)
{
    printf("function param value: %d\n", nb);
    int i; 
    
    i = 2;
    if (nb <= 1)
    {
        printf("%d is NOT prime\n", nb);
        return 0;
    }
    while (i * i < nb)
    {
        if (nb % i == 0)
        {
            printf("%d is NOT prime\n", nb);
            return (0);
        }
        i++;
    }
    printf("%d IS prime\n", nb);
    return (1);
}

int main()
{
    printf("function result: %d\n", ft_is_prime(17));
    return (0);
}