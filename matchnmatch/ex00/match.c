/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 23:21:32 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/24 23:21:35 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		match(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2 && *s1 != '*')
		return (match((s1 + 1), (s2 + 1)));
	else if (*s1 == '*' && *s2 == '*')
		return (match((s1 + 1), s2));
	else if (*s2 == '*' && !*s1)
		return (match(s1, (s2 + 1)));
	else if (*s2 == '*' && *s2 && *s1)
		return (match((s1 + 1), s2)) || (match(s1, (s2 + 1)));
	else
		return (0);
}

int main()
{
 	char s1[] = "Hello my name is Slim Shady";
 	char s2[] = "*my";

 	printf("%d\n", match(s1, s2));
 	return (0);
}
