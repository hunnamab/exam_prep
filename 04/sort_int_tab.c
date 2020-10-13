#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int tmp;
    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = -1;
        }
        i++;
    }
}

int main()
{
    int nmb[3] = {1, 1, 0};
    sort_int_tab(nmb, 3);
    int i = 0;
    while (i < 3)
    {
        printf("%d\n", nmb[i]);
        i++;
    }
    return (0);
}