/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 23:58:30 by kcheung           #+#    #+#             */
/*   Updated: 2016/07/16 23:58:33 by kcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_row(int x, char c, char d, char e)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(c);
		}
		else if (i == x)
		{
			ft_putchar(e);
		}
		else
		{
			ft_putchar(d);
		}
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
		if (i == 1)
		{
			ft_print_row(x, '/', '*', '\\');
		}
		else if (i == y)
		{
			ft_print_row(x, '\\', '*', '/');
		}
		else
		{
			ft_print_row(x, '*', ' ', '*');
		}
		i++;
	}
	return (0);
}
