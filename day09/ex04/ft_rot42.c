/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:10:33 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/21 22:11:47 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char rotate_str (char c)
{
	int		i;
	char	result;

	i = 0;
	result = c;
	if (('a' < result && result < 'z') || ('A' < result && result < 'Z'))
	{
		while(i < 42)
		{
			result++;
			if (result == 'z' + 1)
			{
				result -= ('z' - 'a' + 1);
			}
			i++;
		}
	}
	return result;
}

char *ft_rot42(char *str)
{
	int i;
	char *rot_str;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = rotate_str(str[i]);
		i++;
	}
	return (str);
}

int main(void)
{
	char c[] = "abc";

	printf("result: %s", ft_rot42(c));
	return (0);
}
