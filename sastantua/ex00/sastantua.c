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
int print_level(int width, int max_levels);
int g_spaces; 

int ft_putchar(char c) {
  write(1, &c, 1);
  return (0);
}

void sastantua (int size)
{
    int current_level;
    int max_levels;
    int count;
    int level_count;
    int width;
    // int spaces;
    int rows;
    
    current_level = 0;
    max_levels = 3;
    width = 1;
    level_count=0;
    g_spaces = (size*size)+(size*3);                          //size*3 becuase we add size stars each level. then we have to divide those stars and put them on each side.

    while(current_level < size)                     //the total number of blocks
    {
        width = print_level(width, max_levels);     //print_level prints level and returns width count
        max_levels++;                               //increase the number of levels you want in the next block
        current_level++;
    }
    return;
}

int print_level(int width, int max_rows)
{       
        int row_count;

        row_count = 0;
        while (row_count < max_rows)            //the number of levels in each block
        {
            print_row(width, g_spaces);               //printing spaces and stars
            g_spaces--;                               //decrease number of spaces
            
            width += 2;                             //the next row needs to be wider so... here is where we can make each level wider than the next.
            row_count++;                          //keeping track of how many rows in each level
        }
        g_spaces -= 3;
        return width+6;                         //+6 adds 6 stars
}

void print_row(int width, int spaces)
{
    int count = 0;
    while(count < spaces)
    {
        ft_putchar(' ');    //entering spaces
        count++;            //keeping track of which space you are at
    }
    count = 0;
    ft_putchar('/');  //beginning of stars
    while(count < width)
    {
        ft_putchar('*');
        count++;
    }
    ft_putchar('\\'); //end of stars
    ft_putchar('\n'); //got to next line;
}

int main ()
{
    int p_height = 7;
    sastantua(p_height);
    return(0);
}
