/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushOX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 19:37:34 by kcheung           #+#    #+#             */
/*   Updated: 2016/07/16 20:56:40 by kcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_row(int x, char c, char d)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar(c);
		else
			ft_putchar(d);
		i++;
	}
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	int i;

	i = 1;
	while (i <= y)
	{
		if (i == 1 || i == y)
			ft_print_row(x, 'o', '-');
		else
			ft_print_row(x, '|', ' ');
		i++;
	}
	return (0);
}
