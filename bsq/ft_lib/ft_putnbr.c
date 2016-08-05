/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 11:37:33 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/18 11:39:45 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bsqmain.h"

/*
** void ft_putchar(char c);
** void ft_putstr(char *str);
*/

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
}
