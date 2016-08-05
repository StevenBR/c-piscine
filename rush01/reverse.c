/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:49:04 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/24 19:49:07 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		rev_is_valid(int number, int puzzle[9][9], int row, int col)
{
	int i;

	i = 8;
	while (i >= 0)
	{
		if (puzzle[i][col] == number)
			return (0);
		if (puzzle[row][i] == number)
			return (0);
		i--;
	}
	return (is_sector_valid(number, puzzle, row, col));
}

int		rev_fill_sudoku(int puzzle[][9], int row, int col)
{
	int i;

	if (row >= 0 && col >= 0)
	{
		if (puzzle[row][col])
			return (if_on_board(puzzle, row, col));
		i = 8;
		while (i >= 0)
		{
			if (is_available(puzzle, row, col, i - 1))
			{
				puzzle[row][col] = i - 1;
				if (rev_fill_sudoku(puzzle, row, col))
					return (1);
				else
					puzzle[row][col] = 0;
			}
			i++;
		}
		return (0);
	}
	else
		return (1);
}

int		rev_if_on_board(int puzzle[][9], int row, int col)
{
	if ((col - 1) >= 0)
		return (rev_fill_sudoku(puzzle, row, col - 1));
	else if ((row - 1) >= 0)
		return (rev_fill_sudoku(puzzle, row - 1, 0));
	else
		return (1);
}

int		check_input(char **str)
{
	int i;
	int j;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if ((str[i][j] >= '1') && (str[i][j] <= '9'))
				count++;
			j++;
		}
		i++;
	}
	if (count > 16)
		return (0);
	else
		return (1);
}
