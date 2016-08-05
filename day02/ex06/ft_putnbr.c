/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 19:22:19 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/15 19:22:20 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write (1,&c,1);
}


void	ft_putnbr(int nb)
{
	if (nb > 9)
	{

		ft_putnbr( nb / 10);
	}

	ft_putchar('0'+(nb%10));
}

int 	main()
{
	ft_putnbr(41);

	return (0);
}