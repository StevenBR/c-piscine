/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 14:53:23 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/20 14:53:26 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s2[i] == '\0')
			return (s1[i]);
		else if (s2[i] != s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
