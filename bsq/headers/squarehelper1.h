/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squarehelper1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:08:25 by jthai             #+#    #+#             */
/*   Updated: 2016/08/02 23:08:27 by jthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SQUAREHELPER1_H
# define _SQUAREHELPER1_H

int		gt(int num1, int num2, int num3);

int		check_content(char *str, char emp, char obs, char ful);

void	set_contents(int *list, int i, int j);

int		che(int num1, int num2, int num3, int num4);

void	print_content(char a);

int		return_start(char *str, char *strc);

int		print_col(char *str[], int count, int i, char *strc);

#endif
