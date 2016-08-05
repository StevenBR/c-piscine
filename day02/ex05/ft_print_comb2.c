/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 15:59:54 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/14 16:00:22 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_print_num(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void ft_print_separator(int num1, int num2)
{
	if (!(num1==98 && num2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('\n');
	}
}
void ft_print_comb2(void)
{
	char zero;
	int num1;
	int num2; 
	char a;
	char b;
	char c;
	char d;

	zero = '0';
	num1 = 0;
	num2 = 1;
	while(num1<=99){
		while(num2<=99){
			a = (num1/10) + zero;
			b = (num1%10) + zero;
			c = (num2/10) + zero; 
			d = (num2%10) + zero;
			ft_print_num(a,b,c,d);
			ft_print_separator(num1, num2);
			num2++;
		}
		num1++;
		num2=num1+1;
	}
}

int main() 
{
	ft_print_comb2();
}