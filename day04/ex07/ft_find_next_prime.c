/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 11:31:23 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/16 11:31:25 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb)
{
    int i; 
    
    i = 2;
    if (nb <= 1)
    {
        return 0;
    }
    while (i * i < nb || i * i == nb)
    {
        if (nb % i == 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    nb++;
    printf("function param value: %d\n", nb);
    while (ft_is_prime(nb) != 1)
    {
        nb++;
    }

    return nb;
}

int main ()
{
    printf("function result: %d\n", ft_find_next_prime(23));
    return (0);
}
