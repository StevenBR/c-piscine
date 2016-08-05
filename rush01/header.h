/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:48:41 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/24 19:48:47 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int i);
void	ft_putstr(char *str);
int		throw_error(void);
void	print_matrix(int board[9][9]);
void	board_init(int board[9][9]);
void	create_row(int row[], char *str);
int		is_sector_valid(int number, int puzzle[9][9], int row, int col);
int		is_valid(int number, int puzzle[9][9], int row, int col);
int		is_available(int puzzle[][9], int row, int col, int num);
int		is_incomplete(int puzzle[9][9]);
int		fill_sudoku(int puzzle[][9], int row, int col);
int		if_on_board(int puzzle[][9], int row, int col);
int		contrast_boards(int puzzle[9][9], int rev_puzzle[9][9]);
int		rev_fill_sudoku(int puzzle[][9], int row, int col);
int		rev_is_valid(int number, int puzzle[9][9], int row, int col);
int		rev_if_on_board(int puzzle[][9], int row, int col);
int		check_input(char **str);
#endif
