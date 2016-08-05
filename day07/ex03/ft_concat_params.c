/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 23:06:30 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/20 23:06:33 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*mystrcat(char *dest, char *src)
{
	int size;
	int i;

	i = 0;
	size = ft_strlen(dest);
	if (size > 0)
	{
		dest[size] = '\n';
		size++;
	}
	while (src[i] != '\0')
	{
		dest[size++] = src[i++];
	}
	dest[size++] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*result;

	result = malloc(1);
	i = 1;
	while (i < argc)
	{
		mystrcat(result, argv[i]);
		i++;
	}
	return (result);
}
