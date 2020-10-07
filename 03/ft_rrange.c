#include <stdlib.h>
#include <stdio.h>

int ft_abs(int x)
{
    if (x < 0)
        return (-x);
    return (x);
}

int     *ft_rrange(int start, int end)
{
    int *p;
    int i = 0;

    p = (int *)malloc(sizeof(int) * ft_abs(end - start) + 1);
    if (end > start)
    {
        while (end > start)
        {
            p[i] = end;
            printf("a) %d\n", p[i]);
            end--;
            i++;
        }
        p[i] = start;
        printf("a) %d\n", p[i]);
    }
    if (start > end)
    {
        while (start > end)
        {
            p[i] = end;
            printf("b) %d\n", p[i]);
            end++;
            i++;
        }
        p[i] = start;
        printf("b) %d\n", p[i]);
    }
    return (p);
}

/* int main()
{
    ft_rrange(10, 3);
    return (0);
} */