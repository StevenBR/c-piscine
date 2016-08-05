/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_helper1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:04:28 by jthai             #+#    #+#             */
/*   Updated: 2016/08/02 23:04:30 by jthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/bsqmain.h"
#include "headers/list.h"
#include "headers/squarehelper1.h"

int		gt(int num1, int num2, int num3)
{
	if (num1 <= num2 && num1 <= num3)
		return (num1);
	if (num2 < num1 && num2 <= num3)
		return (num2);
	return (num3);
}

void	set_contents(int *list, int i, int j)
{
	list[1] = i + 1;
	list[2] = j + 1;
}

int		che(int num1, int num2, int num3, int num4)
{
	if (num1 != 0 && num2 != 0 && num3 != 0 && num4 != 0)
		return (1);
	return (0);
}

void	print_content(char a)
{
	ft_putchar(a);
	ft_putchar('\n');
}

int		print_col(char *str[], int count, int i, char *strc)
{
	if (str[i][0] != strc[1] && count == 0)
	{
		count++;
		str[i][0] = strc[2];
	}
	return (count);
}
