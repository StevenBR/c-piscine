/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 00:01:20 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/20 00:03:04 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	put_filename(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		compare_strs(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
			return (s1[i]);
		else if (s2[i] != s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	unsigned int	i;
	char			*temp[50];
	unsigned int	k;

	i = 1;
	while (i < argc)
	{
		k = i + 1;
		while (k < argc)
		{
			if (compare_strs(argv[i], argv[k]) > 0)
			{
				*temp = argv[i];
				argv[i] = argv[k];
				argv[k] = *temp;
				k++;
			}
			else
				k++;
		}
		i++;
		put_filename(argv[i - 1]);
		ft_putchar('\n');
	}
	return (0);
}
