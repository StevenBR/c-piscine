/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 14:03:36 by jthai             #+#    #+#             */
/*   Updated: 2016/08/01 14:03:38 by jthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/bsqmain.h"
#include <stdlib.h>

/*
** # < 0 = ERROR, # >= 0 OK
** returns line number
*/

int		val_row(char *str, char emp, char obs, char ful)
{
	int i;

	i = 0;
	// printf("emp: %c\n", emp);
	// printf("obs: %c\n", obs);
	// printf("ful: %c\n", ful);
	while (str[i] != '\0')
	{
		if (str[i] == ful && (str[i] != emp || str[i] != obs))
			return (-1);
		// printf("%c", str[i]);
		if (str[i] != ful && str[i] != emp && str[i] != obs && str[i] != '\n'
			&& str[i] != 0)
			return (-8);
		i++;
	}
	return (i);
}

int		val_map(char *str[], int line, int col, char *strc)
{
	int	i;
	int j;
	int count;

	i = -1;
	count = 0;
	while (++i < line)
	{
		if (str[i] == 0 && i < line)
			return (-5);
		j = -1;
		while (++j < col)
		{
			if (str[i][j + 1] != '\0' &&
				str[i][j + 1] != '\n' && j == col - 1)
				return (-2);
			if (str[i][j] == strc[1])
				count++;
		}
		if (val_row(str[i], strc[0], strc[1], strc[2]) == -1)
			return (-3);
	}
	// printf("i: %i\n", i);
	// printf("%s\n", str[i]);
	// if (str[line] == NULL)
	// 	return (-4);
	if (count == line * col)
		return (-4);
	return (0);
}

int		check_char(char *strc)
{
	if (strc[0] == strc[1] || strc[1] == strc[2] || strc[0] == strc[2])
		return (-7);
	return (0);
}
