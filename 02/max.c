#include <stdio.h>

int		max(int *tab, unsigned int len)
{
    int max = 0;
    unsigned int i = 0;
    while (i < len)
    {
        if(tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}

int main()
{
    int arr[5];
    printf("%d\n", max(arr, 5));
    return (0);
}