/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:31:37 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/20 15:31:39 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*dest = malloc(ft_strlen(src) + 1);
	i = 0;
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

int     main()
{
    char source[] = "steven";
    printf("my result: %s\n", ft_strdup(source));
	printf("actual result: %s\n", strdup(source));
    // char *str;
    // str = (char *) malloc(15);
    return (0);
}
