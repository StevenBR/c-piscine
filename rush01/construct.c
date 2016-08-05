/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   construct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:48:26 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/24 19:48:28 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	board_init(int board[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	create_row(int row[], char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.')
		{
			row[i] = 0;
		}
		else
		{
			row[i] = str[i] - '0';
		}
		i++;
	}
}

int		is_incomplete(int board[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (board[i][j] == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		contrast_boards(int board[9][9], int rev_board[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (board[i][j] != rev_board[i][j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int board[9][9];
	int rev_board[9][9];
	int i;

	i = 0;
	board_init(board);
	board_init(rev_board);
	while (i < argc - 1)
	{
		create_row(board[i], argv[i + 1]);
		create_row(rev_board[i], argv[i + 1]);
		i++;
	}
	fill_sudoku(board, 0, 0);
	rev_fill_sudoku(rev_board, 0, 0);
	if ((argc != 10) || (check_input(argv)))
		return (throw_error());
	if (contrast_boards(board, rev_board))
		return (throw_error());
	if (is_incomplete(board) || (is_incomplete(rev_board)))
		return (throw_error());
	print_matrix(board);
	return (0);
}
