/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 19:43:46 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/21 22:09:53 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void				ft_takes_place(int hour)
{
	char			s;
	char			e;
	char			*str;
	unsigned int	start;
	unsigned int	end;

	str = "THE FOLLOWING TAKES PLACE BETWEEN";
	start = hour <= 12 ? hour : hour - 12;
	end = (start + 1) <= 12 ? start + 1 : 1;
	s = (hour < 12 || hour == 24) ? 'A' : 'P';
	e = (hour + 1 < 12 || hour + 1 >= 24) ? 'A' : 'P';
	printf("%s %i.00 %c.M AND %i.00 %c.M", str, start, s, end, e);
}
