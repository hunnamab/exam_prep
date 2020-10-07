#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int a_temp;
    a_temp = *a;
    *a = *b;
    *b = a_temp;
}

/* int main()
{
    int a = 5;
    int b = 10;
    ft_swap(&a, &b);
    printf("a = %d\nb = %d\n", a, b);
    return (0);
} */