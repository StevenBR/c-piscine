/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concatn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:56:07 by jthai             #+#    #+#             */
/*   Updated: 2016/07/19 12:56:12 by jthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_concatn(char *dest, char *src, int nb)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}
