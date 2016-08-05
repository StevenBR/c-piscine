/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 23:22:13 by jthai             #+#    #+#             */
/*   Updated: 2016/08/01 23:22:14 by jthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/bsqmain.h"
#include "headers/list.h"
#include "headers/squarehelper1.h"

int		**cpy_funct(char *str[], int len, int row, char *strc)
{
	int i;
	int j;
	int **calar;

	i = -1;
	calar = (int**)malloc(sizeof(int*) * row);
	while (++i < row)
	{
		calar[i] = malloc(sizeof(int) * len);
		j = -1;
		while (++j < len)
		{
			if (str[i][j] == strc[0])
				calar[i][j] = 1;
			if (str[0][j] == strc[0] && str[0][j] != strc[1])
				calar[0][j] = 1;
			if (str[i][j] == strc[1])
				calar[i][j] = 0;
		}
		if (str[i][0] == strc[0] && str[i][0] != strc[1])
			calar[i][0] = 1;
	}
	return (calar);
}

/*
** list[0] = maxsize, list[1] = indexofx, list[2] = indexofY
*/

int		*return_index(int *s[], int len, int row, int j)
{
	int i;
	int maxsize;
	int *list;

	maxsize = 0;
	i = 0;
	list = malloc(sizeof(int) * 5);
	while (++i < row)
	{
		j = 0;
		while (++j < len)
		{
			if (che(s[i - 1][j], s[i][j - 1], s[i - 1][j - 1], s[i][j]) == 1)
			{
				s[i][j] = gt(s[i - 1][j], s[i][j - 1], s[i - 1][j - 1]) + 1;
				if (s[i][j] > maxsize && s[i][j] != maxsize)
				{
					maxsize = s[i][j];
					set_contents(list, i, j);
				}
			}
		}
	}
	list[0] = maxsize;
	return (list);
}

void	print_arm(char *str[], int *res, char obs, char ful)
{
	int i;
	int j;
	int maxsize;

	i = 0;
	maxsize = 0;
	j = 0;
	maxsize = res[0];
	i = res[1] - maxsize;
	while (i < res[1])
	{
		j = res[2] - maxsize;
		while (j < res[2])
		{
			if (str[i][j] != obs)
				str[i][j] = ful;
			j++;
		}
		i++;
	}
}

void	check_single(char *str[], int col, int row, char *strc)
{
	int i;
	int count;

	i = -1;
	count = 0;
	if (row == 1 && col > 0)
	{
		while (++i < col)
		{
			if (str[0][i] != strc[1] && count == 0)
			{
				count++;
				str[0][i] = strc[2];
			}
			ft_putchar(str[0][i]);
		}
	}
	if (row > 0 && col == 1)
	{
		while (++i < row)
		{
			count = print_col(str, count, i, strc);
			print_content(str[i][0]);
		}
	}
}

/*
**	import conditional characters from linked list
** Skipping first row and col for check and doing separacte check/calc
** Should put conditional char in a linked list or array and call from there
*/

void	make_square(char *str[], int col_len, int row, char *strc)
{
	int **calar;
	int	*res;
	int i;

	i = -1;
	if ((row == 1 && col_len > 0) || (row > 0 && col_len == 1))
		check_single(str, col_len, row, strc);
	else
	{
		calar = cpy_funct(str, col_len, row, strc);
		res = return_index(calar, col_len, row, 0);
		res[3] = col_len;
		res[4] = row;
		print_arm(str, res, strc[1], strc[2]);
		while (++i < row)
		{
			write(1, str[i], col_len);
			write(1, "\n", 1);
		}
		free(strc);
		free(res);
	}
}
