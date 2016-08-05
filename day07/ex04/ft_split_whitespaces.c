/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 15:08:55 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/21 15:08:59 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_ws(char c)
{//checking if white space, 0 no, 1 yes;
	if(c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int ret_strcount(char *str)
{//counting amount of substrings in given string, delimited by whitespaces
	unsigned int i;
	int count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{//starting 0 index
			if (is_ws(str[i]) == 0) //if not space (start of string) then word count increases
				count++;
		}
		else if (is_ws(str[i]) == 0)
		{
			if(is_ws(str[i - 1]) == 1)
				count++;
		}
		i++;
	}
	return count;
}

char *ret_substr(char *str, int i_s, int i_e)
{//malloc space for string and setting string determined by end - start indexes.
	int size;
	char *new_str;
	int count;

	count = 0;
	size = i_e - i_s;
	new_str = malloc(sizeof(char) * size);
	while(count < size + 1)
	{
		new_str[count++] += str[i_s++];
	}
	new_str[++count] = '\0';
	return new_str;
}

char	**ft_split_whitespaces(char *str)
{
	char **container = (char **)malloc(sizeof(char *) * ret_strcount(str)); //watch out for seg fault (+2 instead?)
	unsigned int	i;
	int				start;
	int				c_index;

	i = 0;
	c_index = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			start = is_ws(str[i]) == 0 ? 0 : start;
		else if (is_ws(str[i]) == 0)
		{//else if: any char after 0 index
			if(is_ws(str[i - 1]) == 1) //if space before this, then this is the start
				start = i;
			if(is_ws(str[i + 1]) == 1)//if space after this, then this is the end
				container[c_index++] = ret_substr(str, start, i); //creating the string, assigning it to contianer
		}
		i++; //continuing on no matter what
	}
	return (container);
}

int		main()
{
	char str[] = "this\vis \tsparta \n n \fnigga\n";
	ft_split_whitespaces(str);
	return (0);
}
