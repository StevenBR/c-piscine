/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqmain.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 16:47:16 by jthai             #+#    #+#             */
/*   Updated: 2016/08/03 16:47:17 by jthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BSQMAIN_H
# define _BSQMAIN_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
char	*ft_concatn(char *dest, char *src, int nb);
char	*ft_concat(char *dest, char *src);
void	ft_mapgen_error(int num);
int		val_row(char *str, char emp, char obs, char ful);
int		val_map(char *str[], int line, int col, char *strc);
void	make_square(char *str[], int col_len, int row, char *strc);
int		check_char(char *strc);

#endif
