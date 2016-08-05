/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:04:01 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/20 15:04:03 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	put_filename(char *str)
{
	int i;

	i = 1;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	unsigned int i;

	i = 0;
	while (i < argc)
	{
		put_filename(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
