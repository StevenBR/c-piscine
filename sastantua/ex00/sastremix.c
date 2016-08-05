#include <stdio.h>
#include <unistd.h>


void sastantua (int size);
void print_row(int width, int spaces);
int print_level(int width, int max_rows);

int g_spaces; 

int ft_putchar(char c) {
  write(1, &c, 1);
  return (0);
}

int main ()
{
    int p_height = 7;
    sastantua(p_height);
    return(0);
}

void sastantua (size)
{
    int current_level;
    int max_rows;
    int count;
    int level_count;
    int width;
    
    current_level = 1;
    max_rows = 4;
    width = 1;
    level_count=0;
    g_spaces = (size*size)+(size-1);

    while(current_level < size)                     //the total number of blocks
    {
        width = print_level(width, max_rows);     //print_level prints level and returns width count
        // if (current_level == 1)
        //     max_rows++;                               //increase the number of levels you want in the next block
        // else 
        if(current_level % 2 == 0)
            max_rows+=2;

        current_level++;
    }
    return;
}

int print_level(int width, int max_rows)
{       
        int row_count;

        row_count = 0;
        while (row_count < max_rows+(max_rows/2))            //the number of levels in each block
        {
            if(row_count < max_rows)
            {
                print_row(width, g_spaces);               //printing spaces and stars
            }
            g_spaces--;                               //decrease number of spaces
            width += 2;                             //the next row needs to be wider so... here is where we can make each level wider than the next.
            row_count++;                          //keeping track of how many rows in each level
        }
        return width;                         //+6 adds 6 stars
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