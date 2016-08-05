/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 15:10:05 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/16 15:10:07 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void print_row(int width, int spaces);

int ft_putchar(char c) {
  write(1, &c, 1);
  return (0);
}

void sastantua (size)
{
    int current_level;
    int max_levels;
    int count;
    int level_count;
    int width;
    int spaces;
    int total_rows;
    int rows;
    
    current_level = 0;
    max_levels = 3;
    total_rows = 3;
    rows = 0;
    width = 1;
    count = 0;
    level_count=0;
    spaces = (size*3)/2-1;                          //should be half of the pyrimid bottom(current result needs to be changed)

    while(current_level < size)                     //the total number of blocks
    {
        while (level_count < max_levels)            //the number of levels in each block
        {
            print_row(width, spaces);               //printing the stars
            // if (rows == total_rows)                 // if the rows in the current level max out, you are done with that block and want to add a row to the next block
            // {
            //     total_rows+=1;
            //     rows = 0;
            // }
            // else                                   //else continue adding rows like normal;
            // {
            //     rows++;
            // }
            spaces--;                               //want to remove spaces as you go down the pyramid
            width += 2;                             //the next row needs to be wider so...
            level_count++;                          //keeping track of how many levels you have completed;
        }
        level_count = 0;                            //want to count the levels over again
        max_levels++;                               //increase the number of levels you want in the next block
        current_level++;
    }
    return;
}

void print_row(int width, int spaces)
{
    int count = 0;
    while(count < spaces)
    {
        ft_putchar(' ');
        count++;
    }
    count = 0;
    ft_putchar('/');  //beginning of stars
    while(count < width)
    {
        ft_putchar('*');
        count++;
    }
    ft_putchar('\\'); //end of stars
    ft_putchar('\n');
}

int main ()
{
    int p_height = 2;
    sastantua(p_height);
    return(0);
}


// size
// current_level
// current_level_height
// width

// newline \n instead of counting.
// 6 3
// *****
// ***********
// 6 3
// *****************
// ***********************
// 8 4
// *******************************
// ***************************************
// 8 4
// *************************************************
// *********************************************************
// 10 5
// 10 5
// 10 5?
// 12 6