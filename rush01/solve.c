/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:48:15 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/24 19:49:12 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		is_sector_valid(int number, int board[9][9], int row, int col)
{
	int row1;
	int row2;
	int col1;
	int col2;

	row1 = (row + 2) % 3;
	row2 = (row + 4) % 3;
	col1 = (col + 2) % 3;
	col2 = (col + 4) % 3;
	if (board[row1 + 3 * (row / 3)][col1 + 3 * (col / 3)] == number)
		return (0);
	if (board[row2 + 3 * (row / 3)][col1 + 3 * (col / 3)] == number)
		return (0);
	if (board[row1 + 3 * (row / 3)][col2 + 3 * (col / 3)] == number)
		return (0);
	if (board[row2 + 3 * (row / 3)][col2 + 3 * (col / 3)] == number)
		return (0);
	return (1);
}

int		is_valid(int number, int board[9][9], int row, int col)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (board[i][col] == number)
			return (0);
		if (board[row][i] == number)
			return (0);
		i++;
	}
	return (is_sector_valid(number, board, row, col));
}

int		is_available(int board[9][9], int row, int col, int num)
{
	int row_start;
	int col_start;
	int i;

	i = 0;
	row_start = (row / 3) * 3;
	col_start = (col / 3) * 3;
	while (i < 9)
	{
		if (board[row][i] == num)
			return (0);
		if (board[i][col] == num)
			return (0);
		if (board[row_start + (i % 3)][col_start + (i / 3)] == num)
			return (0);
		i++;
	}
	return (1);
}

int		fill_sudoku(int board[9][9], int row, int col)
{
	int i;

	if (row < 9 && col < 9)
	{
		if (board[row][col])
			return (if_on_board(board, row, col));
		i = 0;
		while (i < 9)
		{
			if (is_available(board, row, col, i + 1))
			{
				board[row][col] = i + 1;
				if (fill_sudoku(board, row, col))
					return (1);
				else
					board[row][col] = 0;
			}
			i++;
		}
		return (0);
	}
	else
		return (1);
}

int		if_on_board(int board[9][9], int row, int col)
{
	if ((col + 1) < 9)
		return (fill_sudoku(board, row, col + 1));
	else if ((row + 1) < 9)
		return (fill_sudoku(board, row + 1, 0));
	else
		return (1);
}
