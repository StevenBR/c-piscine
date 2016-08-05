#include <string.h>
#include <stdio.h>

int string_check(char *str, int c_index, char *sub)
{   
    int i;

    i = 0;
    while(str[c_index] == sub[i])
    {
        printf("still matching\n");
        i++;
        c_index++;
    }
    return 0;
}

void ft_strstr(char *str, char *to_find)
{
    printf("function params: %s, %s\n", str, to_find);
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {   
        if (str[i] == to_find[0])
        {
            printf("Found a match\n");
            string_check(str, i, to_find);
            return;
        }
        i++;
    }
    printf("no match\n");
}
