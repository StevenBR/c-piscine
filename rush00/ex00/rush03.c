/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 23:58:52 by kcheung           #+#    #+#             */
/*   Updated: 2016/07/16 23:58:54 by kcheung          ###   ########.fr       */
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
			ft_print_row(x, 'A', 'B', 'C');
		}
		else if (i == y)
		{
			ft_print_row(x, 'A', 'B', 'C');
		}
		else
		{
			ft_print_row(x, 'B', ' ', 'B');
		}
		i++;
	}
	return (0);
}
