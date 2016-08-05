/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squarehelper2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 16:01:30 by jthai             #+#    #+#             */
/*   Updated: 2016/08/03 16:01:32 by jthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/bsqmain.h"
#include "headers/list.h"
#include "headers/squarehelper1.h"

int		return_start(char *str, char *strc)
{
	int count;

	count = -1;
	while (str[++count] != '\0')
	{
		if (str[count] != strc[0] && str[count] != strc[1])
			return (0);
	}
	return (-1);
}
