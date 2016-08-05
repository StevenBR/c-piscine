/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 11:18:33 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/16 09:50:46 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


char ft_strrev(char *str);
int ft_putchar(char c);
void ft_putstr(char *str);

int ft_putchar(char c)
{
		write (1,&c,1);
			return(0);
}

void ft_putstr(char *str)
{
	int i;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return;
}

char ft_strrev(char *str)
{
	int i = 0;
	int count = -1;
	char *rev_string;

	while (str[i] != '\0')
	{
		count ++;
		i++;
	}

	while (count >= 0)
	{
		rev_string += str[count];
		// ft_putchar(str[count]);
		count--;
	}

	return *rev_string;
	}

int main()
{
	char *teststring;

	teststring = "whatsupme";

	printf("%c\n", ft_strrev(teststring));
	return(0);
}
