#include <stdio.h>
#include <unistd.h>

int     fibonacci(int index)
{
    printf("function param value: %d\n", index);
    int first;
    int second;
    int next;
    int i;

    first = 0;
    second = 1;
    i = 0;

    while (i <= index)
    {
        if (i <= 1)
        {
            next = i; 
        }
        else 
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("fib current value: %d\n", next);
        i++;
    }

    return next;
}

int main()
{   
    printf("result of function: %d", fibonacci(9));
    return (0);    
}